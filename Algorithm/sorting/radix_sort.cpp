#include<bits/stdc++.h>
using namespace std;
int count_sort(int arr[],int n,int pos)
{
    int count[10]={0};
    
    for(int i=0;i<10;i++)
    {
        count[(arr[i]/pos)%10]++;
    }
    for(int i=1;i<10;i++)
    {
        count[i]+=count[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        output[--count[(arr[i]/pos)%10]]=arr[i];

    }
    for(int i=0;i<n;i++)
    {
        arr[i]=output[i];
    }
    return 0;
}
int radix_sort(int arr[],int n)
{
    int k=arr[0],pos;
    for(int i=0;i<n;i++)
    {
        k=max(k,arr[i]);
    }

    for(pos=1;(k/pos)>0;pos=pos*10)
    {
        count_sort(arr,n,pos);
    }

}
int main()
{
    int arr[10]={1,3,2,3,4,33,120,56,430,10};
    int n=10;
    radix_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}