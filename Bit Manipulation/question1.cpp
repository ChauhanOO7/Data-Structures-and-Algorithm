#include<bits/stdc++.h>
using namespace std;

using lli = long long int;
using pii = pair<int,int>;
using pci = pair<char,int>;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //minimum flips to convert a number to goal number.

    int number,goal;
    cin>>number>>goal;

    int flipbits = number ^ goal;

    int count=0;

    while(flipbits != 0){

        count+=(flipbits & 1);
        flipbits = flipbits>>1;
    }

    cout<<count;


    return 0;
}