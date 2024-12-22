#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count=0,k;
    string s="aaa",t="a";

    cin>>k;
    cout<<s.size();
    cout<<t.size();

    for(int i=0;i<int(s.size());i++)
    {
        if(s[i]==t[i])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    int total;
    total=(s.size()-count)+(t.size()-count);
    if(total==k)
    {
        cout<<"Yes";
    }
    else if(total==0 && k>=(count*2))
    {
        cout<<"Yes";
    }
    else if((k-total)%2==0 && k>=total)
    {
        cout<<"Yes";
    }
    else if(k>=total && count==0)
    {
        cout<<"Yes";
    }
    else if(k>=(s.size()+t.size()))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }

  
    return 0;
}