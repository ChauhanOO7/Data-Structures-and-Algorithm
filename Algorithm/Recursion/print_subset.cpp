#include<bits/stdc++.h>
using namespace std;

void subsets(string s,string ot)
{
    if(s.size()==0)
    {
        cout<<ot<<" ";
        return;
    }
    string ot1=ot,ot2=ot;
    ot2.push_back(s[0]);
    s.erase(s.begin()+0);

    subsets(s,ot1);
    subsets(s,ot2);
}

int main()
{
    string s,ot="";
    
    cin>>s;

    subsets(s,ot);
    return 0;
}