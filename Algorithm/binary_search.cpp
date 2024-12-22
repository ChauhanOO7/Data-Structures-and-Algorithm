#include<bits/stdc++.h>
using namespace std;

bool binary_search(int arr[10],int key)
{   
    int start=0,end=9,mid;
    while(start<=end)
    {
        mid=(start+end)/2;

        if(arr[mid]==key)
        {
            return true;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }

    }

    return false;
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};                // must be in sorted order.
    int key;
    cout<<"Enter the key you want to search : ";
    cin>>key;
    
    if(binary_search(arr,key))
    {
        cout<<"found";
    }
    else
    {
        cout<<"not found";
    }
    
    return 0;
}