#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c;
    cin>>n;
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        s.push(i);

    }
    s.pop();
    c=s.top();
    
    cout<<c;
    cout<<endl;
    if(s.empty())
    {
        cout<<"stack is empty.";
    }
    else
    {
        cout<<"Stack is not empty.";   
    }
    cout<<endl;
    cout<<" size of the stack = ";
    cout<<s.size();
    
    return 0;
}