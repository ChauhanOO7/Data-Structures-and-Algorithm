#include<bits/stdc++.h>
using namespace std;

using lli = long long int;
using pii = pair<int,int>;
using pci = pair<char,int>;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //divide two integer without division operator.

    lli dividend,divisor,quotient=0;
    bool negative = false;
    cin>>dividend>>divisor;

    if(dividend < 0 and divisor >= 0)   negative=true;
    if(dividend >=0 and divisor < 0)    negative=true;
    dividend=abs(dividend);
    divisor=abs(divisor);
    
    while(dividend >= divisor){
        lli q = 0;
        while((divisor<<(q+1)) < dividend){
            q++;
        }
        quotient+=(1<<q);
        dividend-=(divisor<<q);
    }

    if(negative)    cout<<quotient*-1;
    else    cout<<quotient;

    return 0;
}