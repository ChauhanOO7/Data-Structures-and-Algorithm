#include<bits/stdc++.h>
using namespace std;

void find_pos(vector<int> v,int k,int index)
{
    if(v.size()==1)
    {
        cout<<v[0];
        return;
    }

    v.erase(v.begin()+index);
    index=(index + k)%(v.size());

    find_pos(v,k,index);
}

int main()
{
    int n=40,k=7,index=0;
    index=index+(k-1);

    vector<int> v;
    for(int i=0;i<n;i++)
    {
        v.push_back(i+1);
    }

    find_pos(v,k-1,index);
    return 0;
}