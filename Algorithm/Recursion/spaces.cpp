#include<bits/stdc++.h>
using namespace std;

void with_spaces(string s,string ot)
{
    if(s.size()==0)
    {
        cout<<ot<<"   ";
        return;
    }

    string ot1=ot,ot2=ot;
    ot1.push_back(s[0]);
    ot2.push_back(' ');
    ot2.push_back(s[0]);
    s.erase(s.begin()+0);

    with_spaces(s,ot1);
    with_spaces(s,ot2);


}

int main()
{
    string s="abcd",ot;
    ot.push_back(s[0]);
    s.erase(s.begin()+0);

    with_spaces(s,ot);

    return 0;
}