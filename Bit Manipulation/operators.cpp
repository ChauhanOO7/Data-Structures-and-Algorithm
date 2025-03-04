#include<bits/stdc++.h>
using namespace std;

using lli = long long int;
using pii = pair<int,int>;
using pci = pair<char,int>;

/*
    AND operator &:
        all true-> true.
        1 false -> false.
    
    OR operator |:
        1 true-> true;
        all false-> false.
    
    XOR operator ^:
        odd 1s -> 1
        even 1s -> 0

        imp-> two same numbers xor always zero.
        imp-> number xor with zero is equal to number.  

    right shift >>:
        shift bits to right.
        like    13>>2
            shift 13 by 2 positions.

            13->1101
            shift by 2 bits-> 0011.
        
        right shift of number with k bits: number/pow(2,k).

    left shift <<:
        shift bits to left.
        like    13<<2
            shift 13 by 2 positions.

            13->1101
            shift by 2 bits-> becomes 26(11010).
            
        left shift of number with k bits: number * pow(2,k).

        left shift can produced overflow condition at INT_MAX because it increments the value.

    NOT operator ~:
        how it works:
            1.flip
            2. check if negative or not.
                if yes, then 2s complement.
                else, stop.
        
        example:
            ~5 -> -6
            ~(-6) -> 5
*/
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}