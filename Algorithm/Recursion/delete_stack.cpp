#include<bits/stdc++.h>
using namespace std;

void delete_ele(stack<int> &s,int k)
{
    if(k==1)
    {
        if(s.size()!=0)
        {
            s.pop();
        }
        
        return;
    }

    int store=s.top();
    s.pop();
    delete_ele(s,k-1);

    s.push(store);
}

int main()
{
    int n;
    cin>>n;
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        s.push(a);
    }
    int k=(n/2)+1;
    delete_ele(s,k);
    if(s.size()==0)
    {
        cout<<"empty";
    }
    else
    {
        for(int i=0;i<n-1;i++)
        {
            cout<<s.top();
            s.pop();
        }
    }
    
    return 0;
}