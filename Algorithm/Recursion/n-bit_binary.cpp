#include<bits/stdc++.h>
using namespace std;

void print_binary(string binary,int ones,int zeroes,int n)
{
    if(n==0)
    {
        cout<<binary<<" ";
        return;
    }

    string binary1=binary;

    binary1.push_back('1');
    print_binary(binary1,ones+1,zeroes,n-1);

    if(ones>zeroes)
    {
        string binary2=binary;
        binary2.push_back('0');
        print_binary(binary2,ones,zeroes+1,n-1);
    }
}

int main()
{
    int n,ones=0,zeroes=0;
    cin>>n;
    string binary="";

    print_binary(binary,ones,zeroes,n);

    
    return 0;
}