#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,j,r1,r2,count,cnt=0;
    vector<int> s,store;
    // s={19,10,12,24,25,22};
    // s={1,2,3,4,5,6,7,8,9,10};
    cin>>k;
    for(int i=0;i<int(s.size());i++)
    {
        if(s[i]%k==0)
        {
            cnt++;
        }
    }
    if(cnt>=1)
    {
        store.push_back(1);
    }
    else{
        store.push_back(0);
    }
    for(int i=1;i<=(k/2);i++)
    {
        r1=0,r2=0;
        count=0;
        for(int j=0;j<int(s.size());j++)
        {
            if(s[j]%k==i)
            {
                r1++;
            }
            if(s[j]%k==(k-i))
            {
                if((k-i)==i)
                {
                    count++;
                }
                r2++;
            }
        }
        if(r1>r2)
        {
            
            store.push_back(r1);
        }
        else if(r2>r1)
        {
            store.push_back(r2);
        }
        else
        {
            if(count>=1)
            {
                store.push_back(1);
            }
            else
            {
                store.push_back(r1);
            }
            
        }
    }
    // for(int i=0;i<int(store.size());i++)
    // {
    //     cout<<store[i]<<" ";
    // }
    int sum=0;
    for(int i=0;i<int(store.size());i++)
    {
        sum=sum+store[i];
    }
    cout<<endl;
    cout<<sum;
    return 0;
}