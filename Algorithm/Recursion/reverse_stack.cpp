#include<bits/stdc++.h>
using namespace std;

void del_ins(stack<int> &s,int k,int com,int store)
{
    
    if(k==com)
    {
        // if(s.size()!=0)
        // {
        //     s.pop();
        // }
        s.push(store);
        return;
    }
    int back=s.top(); 
    s.pop();
    k--;
    del_ins(s,k,com,store);
    
    s.push(back);
}

void reverse_st(stack<int> &s,int k,int com)
{
    
    if(com==int(s.size()))
    {
        return;
    }
    int store=s.top();
    s.pop();
    del_ins(s,k-1,com,store);
    com++;
    
    // k=s.size()-com;
    reverse_st(s,k,com);
}

int main()
{
    int n,com=0;
    cin>>n;
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        s.push(a);
    }
    int k=n;
    reverse_st(s,k,com);
    for(int i=0;i<n;i++)
    {
        cout<<s.top();
        s.pop();
    }
    return 0;
}