#include<bits/stdc++.h>
using namespace std;

int shell_sort(int arr[],int n)
{
    int gap=floor(n/2);
    while(gap>=1)
    {
        for(int j=gap;j<n;j++)
        {
            for(int i=j-gap;i>=0;i-=gap)
            {
                if(arr[i]<arr[i+gap])
                {
                    break;
                }
                else
                {
                    swap(arr[i],arr[i+gap]);
                }
            }
        }
        gap=floor(gap/2);
    }
    return 0;
}
int main()
{
    int arr[9]={23,29,15,19,31,7,9,5,2};
    int n=9;
    shell_sort(arr,n);
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}