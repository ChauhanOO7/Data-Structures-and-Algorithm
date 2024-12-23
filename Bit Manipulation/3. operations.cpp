#include<bits/stdc++.h>
using namespace std;

using lli = long long int;
using pii = pair<int,int>;
using pci = pair<char,int>;

/*
swap numbers
check if ith bit is set or not.
set the ith bit.
clear the ith bit.
toggle the ith bit.
remove the last set bit(rightmost).
count the number of set bits.
check if number is power of 2.
*/

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //swap numbers

    int a=5,b=1;

    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<b;

    //check if ith bit is set or not.
    // for 5->0101
    //with left shift

    int i=2;
    int number=5;
    if(((1<<i)&number) != 0)   cout<<"SET";
    else    cout<<"NOT SET";

    //right shift

    if(((number>>i)&1) != 0)    cout<<"SET";
    else    cout<<"NOT SET";

    cout<<'\n';

    //set the ith bit.

    int newnumber = (1<<i) | number;
    cout<<newnumber<<'\n';

    //clear the ith bit.
    // with the help of negation we flip the bits.

    int clearnumber = ~(1<<i) & number;
    cout<<clearnumber<<'\n';

    //toggle the ith bit.

    int togglenumber = (1<<i) ^ number;
    cout<<togglenumber<<'\n';

    //remove the last set bit(rightmost).

    int removenumber = number & (number-1);
    cout<<removenumber<<'\n';

    //count the number of set bits.
    // brute force you know, more optimised version below  use bitwise operation rathen than arithmetic operation.

    int copynumber = number;
    

    return 0;
}