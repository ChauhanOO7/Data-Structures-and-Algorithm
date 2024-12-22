#include<bits/stdc++.h>
using namespace std;

void super_digit(long long int number)
{
    if(number>=0 && number<=9)
    {
        cout<<number;
        return;
    }
    
    long long int sum=0;
    
    while(number!=0)
    {
        int d;
        d=number%10;
        sum+=d;
        number=number/10;
    }
    super_digit(sum);
}


int main()
{
    string n;
    long long int k,number=0;
    cin>>n;
    cin>>k;
    while(n.size()!=0)
    {
        number=number+(n[0]-'0');
        n.erase(n.begin()+0);
    }
    number=number*k;
    super_digit(number);
    return 0;
}
