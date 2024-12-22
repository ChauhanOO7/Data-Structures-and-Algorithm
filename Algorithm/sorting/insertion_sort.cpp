#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[13]={12,45,23,51,19,8,5,1,43,21,56,74,43};

    for(int i=1;i<13;i++)
    {
        int current=arr[i];
        int prev=i-1;
        while(current<arr[prev] && prev>=0)
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=current;
    }
    for(int i=0;i<13;i++)
    {
        cout<<arr[i]<<" ";
    }
                                                                                                                                 
    return 0;
}