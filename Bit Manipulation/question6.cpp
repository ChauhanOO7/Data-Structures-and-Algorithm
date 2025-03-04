#include<bits/stdc++.h>
using namespace std;

using lli = long long int;
using pii = pair<int,int>;
using pci = pair<char,int>;

int xornumber(int n){

    if(n % 4 == 1)      return 1;
    else if(n % 4 == 2)     return n+1;
    else if(n % 4 == 3)     return 0;
    else    return n;
}
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //xor of range of numbers 1 to n.
    //brute force   O(n)
    int n;
    cin>>n;
    int final=0;
    for(int i=1;i<=n;i++){
        final = final ^ i;
    }
    cout<<final;

    //optimsed version  O(1)

    cout<<xornumber(n);

    // for range l to r -> first calculate 1 to l-1 then 1 to r.
    // then take xor of both the result and you get the answer.

    return 0;
}