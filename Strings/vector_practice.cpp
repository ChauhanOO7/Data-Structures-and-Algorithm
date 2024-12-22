#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr,store;
    arr={5,4,4,2,2,8};
    sort(arr.begin(),arr.end());
    store.push_back(arr.size());

    while(arr.size()!=1)
    {
        
        for(int i=1;i<int(arr.size());i++)
        {
            arr[i]=arr[i]-arr[0];
            if(arr[i]==arr[0])
            {
                
                
            }

        }
        for(int i=1;i<int(arr.size());i++)
        {
           if()
        }
        sort(arr.begin(),arr.end());
        arr.erase(arr.begin());
        store.push_back(arr.size());
        
        
    }
    
    for(int i=0;i<int(store.size());i++)
    {
        cout<<store[i]<<" ";
    }
    return 0;
}