#include<bits/stdc++.h>
using namespace std;

void balanced(string out,int open,int close)
{
    if(open==0 && close==0)
    {
        cout<<out<<" ";
        return;
    }

    string ot1=out;
    if(open!=0)
    {      
        ot1.push_back('(');
        balanced(ot1,open-1,close);
    }
    if(open<close)
    {
        string ot2=out;
        ot2.push_back(')');
        balanced(ot2,open,close-1);
    }  

}

int main()
{
    string out="";
    int n,close,open;
    cin>>n;
    close=n;
    open=n;

    balanced(out,open,close);

    return 0;
}