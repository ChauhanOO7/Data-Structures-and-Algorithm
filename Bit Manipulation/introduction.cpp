#include<bits/stdc++.h>
using namespace std;

using lli = long long int;
using pii = pair<int,int>;
using pci = pair<char,int>;

/*
Bit manipulation refers to the process of performing operations directly on individual bits of binary numbers. 

why we used it?
-> Bit manipulation is efficient because it takes advantage of the binary representation of data and uses bitwise operators,
   which are typically faster than arithmetic operations.

how we convert number into binary?
    1. take a number and divid it by 2 and store the remainder and at last store remaining quotient(which is 1).
    2. print remainder in reverse order and you get your required binary number.

    example:
        for number = 5 we have binary = 101.

conversion binary to number?
    1. start from right to left(with index start with 0).
    2. take sum of all indexes at particular index do this (binary number at that index * pow(2,index)).

how data stored in memory?
    -> for 32 bits(same for 64 bits):(indexing start from 0)
        like a number 1 and binary = 1101.
        in memory first 28 bits fill with zero and then remaining 4 bits take above binary bits.
    -> 31st bit is used for whether it is positive or negative number.
        0-> positive.
        1-> negative.
    -> for negative number it store its 2s complement.

-> 1s complement:
    flip every bit and you get the 1s complement.
-> 2s complement:
    1 + 1s complement = 2s complement.
*/

string numbertobinary(int x){

    string binary="";

    while(x!=0){

        if(x % 2 == 1)    binary+='1';
        else   binary+='0';
        x=x/2;
    }

    reverse(binary.begin(),binary.end());

    return binary;
}

int binarytodecimal(string binary){

    int lastindex = binary.size() - 1;
    int decimal=0;

    for(int i=lastindex;i>=0;i--){
        decimal+= (binary[i]-'0')*pow(2,lastindex-i);   //pow takes logn time.
    }

    return decimal;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,decimal=0;
    cin>>n;

    string binary=numbertobinary(n);

    cout<<binary<<'\n';

    decimal = binarytodecimal(binary);

    cout<<decimal;

    return 0;
}