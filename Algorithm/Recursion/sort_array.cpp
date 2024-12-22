#include<bits/stdc++.h>
using namespace std;

void insert_ele(vector<int> &v,int val)
{
    if(v.size()==0 || v[v.size()-1]<=val)
    {
        v.push_back(val);
        return;
    }

    int temp=v[v.size()-1];
    v.pop_back();
    insert_ele(v,val);
    v.push_back(temp);
}
void sort_arr(vector<int> &v)
{
    if(v.size()==1)
    {
        return;
    }
    int val=v[v.size()-1];
    v.pop_back();

    sort_arr(v);
    insert_ele(v,val);
}
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort_arr(v);

    for(int i=0;i<int(v.size());i++)
    {
        cout<<v[i];
    }
    return 0;
}