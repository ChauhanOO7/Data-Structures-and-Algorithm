#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr,store;
    int count=0,k=0,n=0;
    arr={8,8,14,10,3,5,14,12};
    sort(arr.begin(),arr.end());
    store.push_back(arr.size());

    while((arr.size()-k)!=1)
    {
        
        for(int i=k+1;i<int(arr.size());i++)
        {
            if(arr[i]>arr[count])
            {
                arr[i]=arr[i]-arr[count];
            }
            else if(arr[i]==arr[count])
            {
                arr[i]=0;
                k++;
            }
        }
        k=k+1;
        arr[count]=0;
        count=k;
        
        if(n!=k)
        {
            store.push_back(arr.size()-k);
        }
        
    
        n=k;
    }
    
    for(int i=0;i<int(store.size());i++)
    {
        cout<<store[i]<<" ";
    }
    return 0;
}