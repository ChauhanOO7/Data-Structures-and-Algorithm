#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> ranked,player,new_rank,store;
    ranked={100,90,90,80,75,60};
    player={50,65,77,90,102};
    new_rank.push_back(ranked[0]);
    for(int i=0;i<int(ranked.size()-1);i++)
    {
        
        if(ranked[i+1]!=ranked[i])
        {
            new_rank.push_back(ranked[i+1]);
        }
        
    }
    
    // for(int i=0;i<int(new_rank.size());i++)
    // {
    //     cout<<new_rank[i]<<" ";
    // }
    // cout<<endl;
    int min=0,max=new_rank.size()-1,mid,j=0;
    while(min<=max && j<int(player.size()))
    {
        mid=(min+max)/2;
        if(new_rank[mid]==player[j])
        {
            store.push_back(mid+1);
            min=0;
            max=new_rank.size()-1;
            j++;

        }
        else if(player[j]<new_rank[mid])
        {
            if(min==max)
            {
                store.push_back(mid+2);
                mid=-1;
                j++;
            }
            min=mid+1;
            
        }
        else
        {   
            
            
            max=mid-1;
            if(min>max)
            {
                store.push_back(mid+1);
                min=0;
                max=new_rank.size()-1;
                j++;
            }
            
        }


    }

    for(int i=0;i<int(store.size());i++)
    {
        cout<<store[i]<<" ";
    }
    return 0;
}