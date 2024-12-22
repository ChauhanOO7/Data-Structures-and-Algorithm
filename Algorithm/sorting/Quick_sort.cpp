#include<bits/stdc++.h>
using namespace std;
// watch apna college this code is not same as given in the video.

// O(n2) in worst case and O(nlogn) in average case.
// worst case occur when array is sorted in ascending or descending order.
int partition(int arr[],int min,int max)
{
    int fix=arr[min],count=0,i=0,j=max;
    for(int i=min+1;i<=max;i++)
    {
        if(arr[i]<=fix)
        {
            count++;
        }
    }
    int s=min+count;
    swap(arr[min],arr[s]);
    while(i<s && j>s)
    {
        while(arr[i]<fix)
        {
            i++;
        }
        while(arr[j]>fix)
        {
            j--;
        }
       
        swap(arr[i++],arr[j--]);
        
        
    }
    
    return s;
}

int quick_sort(int arr[],int min,int max)
{
    //base case
    if(min>=max)
    {
        return 1;
    }

    int fixed=partition(arr,min,max);

    quick_sort(arr,min,fixed-1);
    quick_sort(arr,fixed+1,max);

    return 0;
}

int main()
{   
    int arr[10]={1,4,2,67,54,33,33,78,1,65};
    int min=0,max=9;

    quick_sort(arr,min,max);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}