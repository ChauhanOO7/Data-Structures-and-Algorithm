#include<bits/stdc++.h>
using namespace std;

int opera(char ch)
{
    if(ch=='*' || ch=='/')
    {
        return 3;
    }
    else if(ch=='+' || ch=='-')
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int main()
{
    stack<char> s;
    string a,b;
    char ch;
    getline(cin,a);
    for(int i=0;i<int(a.size());i++)
    {
        ch=a[i];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
            cout<<ch;
        }
        else
        {
            while(!s.empty() && opera(ch)<=opera(s.top()))
            {
                cout<<s.top();
                s.pop();
            }
            s.push(ch);
        }
    }   
   while(!s.empty())
   {
        cout<<s.top();
        s.pop();
   }


    return 0;
}