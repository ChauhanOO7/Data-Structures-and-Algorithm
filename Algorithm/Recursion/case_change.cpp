#include<bits/stdc++.h>
using namespace std;

void case_change(string s,string ot)
{
    if(s.size()==0)
    {
        cout<<ot<<" ";
        return;
    }

    string ot1=ot,ot2=ot;
    ot1.push_back(s[0]);
    ot2.push_back(toupper(s[0]));
    s.erase(s.begin()+0);

    case_change(s,ot1);
    case_change(s,ot2);
}

int main()
{
    string s="abc",ot="";
    case_change(s,ot);

    return 0;
}