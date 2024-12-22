#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int sum=0;
    // int y=148;
    // while(y!=0)
    // {
    //     int d;
    //     d=y%10;
    //     sum=sum+d;
    //     y=y/10;

    // }
    // cout<<sum;
    string s="2354";
    int sum=0;
    while(s.size()!=0)
    {
        sum=sum+(s[0]-'0');
        s.erase(s.begin()+0);
    }
    cout<<s;
    cout<<endl;
    s=to_string(sum);
    cout<<s;
    return 0;
}