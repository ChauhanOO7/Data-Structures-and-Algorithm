#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> s;
    string a;
    cin>>a;
    for(int i=0;i<int(a.size());i++)
    {
        if(a[i]=='[' || a[i]=='{' || a[i]=='(')
        {
            s.push(a[i]);
        }
        else
        {
            if(s.empty())
            {
                cout<<"Not Balanced.";
                return 0;
            }
            else
            {
                if(a[i]==']')
            {
                if(s.top()=='[')
                {
                    s.pop();
                }
                else
                {
                    break;
                }   
            }
            if(a[i]=='}')
            {
                if(s.top()=='{')
                {
                    s.pop();
                }
                else
                {
                    break;
                }
            }
            if(a[i]==')')
            {
                if(s.top()=='(')
                {
                    s.pop();
                }
                else
                {
                    
                    break;
                }
            }
            }
        }    
    }
    if(s.empty())
    {
        cout<<"Balanced.";
    }
    else{
        cout<<"Not Balanced.";
    }

    return 0;
}