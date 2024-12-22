#include<bits/stdc++.h>
using namespace std;

int find_num(int n,int k)
{
    int mid;
    
    if(n==1 && k==1)
    {
        return 0;
    }

    mid=pow(2,n-1)/2;
    if(k>mid)
    {
        k=k-mid;
        return !find_num(n-1,k);
    }
    else
    {
        return find_num(n-1,k);
    }
}

int main()
{
    int n,k,store;
    cin>>n>>k;

    store=find_num(n,k);

    cout<<store;

}