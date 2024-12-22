#include<bits/stdc++.h>
using namespace std;

int count_sort(int arr[],int n)
{
    int k=arr[0];
    for(int i=0;i<n;i++)
    {
        k=max(k,arr[i]);
    }
    int count[k+1]={0};
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }

    for(int i=1;i<=k;i++)
    {
        count[i]=count[i]+count[i-1];
    }

    int output_arr[n];
    for(int i=(n-1);i>=0;i--)
    {
        output_arr[--count[arr[i]]]=arr[i];
    }
   
    for(int i=0;i<n;i++)
    {
        arr[i]=output_arr[i];
    }
    return 0;
}
int main()
{
    int arr[10]={1,3,2,3,4,33,12,56,43,10};
    int n=10;
    count_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}