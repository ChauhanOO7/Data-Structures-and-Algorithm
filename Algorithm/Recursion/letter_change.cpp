#include<bits/stdc++.h>
using namespace std;

void case_change(string s,string ot,set<string> &se)
{
    if(s.size()==0)
    {
        se.insert(ot);
        return;
    }

    string ot1=ot,ot2=ot;

    if(s[0]>='a' && s[0]<='z')
    {
        ot1.push_back(s[0]);
        ot2.push_back(toupper(s[0]));
        s.erase(s.begin()+0);        
    }
    else if(s[0]>='A' && s[0]<='Z')
    {
        ot1.push_back(s[0]);
        ot2.push_back(tolower(s[0]));
        s.erase(s.begin()+0); 
    }
    else
    {
        ot1.push_back(s[0]);
        ot2.push_back(s[0]);
        s.erase(s.begin()+0);
    }
    

    case_change(s,ot1,se);
    case_change(s,ot2,se);
}

int main()
{
    string s="a1B2",ot="";
    set<string> se;
    case_change(s,ot,se);
    set<string> :: iterator it;

    for(it=se.begin();it!=se.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}