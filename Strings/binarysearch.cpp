#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int> p,int s){
    int low=0,max=p.size()-1,mid;
    mid=(low+max)/2;
    while(low<=max)
    {
        if(p[mid]==s)
        {
            
            return 0;
        }
        else if(s<p[mid])
        {
            max=mid-1;
            
        }
        else{
            low=mid+1;
        }
        mid=(low+max)/2;
        
    }
    return -1;
}
int main()
{   
    int s,c;
    vector<int> p,store;
    p={5,2,1,4,4};
    sort(p.begin(),p.end());
    cin>>s;
    c=binary_search(p,s);
    if(c==0)
    {
        cout<<"Element found.";

    }
    else{
        cout<<"Element not found.";
    }
    
   
    return 0;
}

  

