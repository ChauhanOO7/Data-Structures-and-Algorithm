#include<bits/stdc++.h>
using namespace std;

using lli = long long int;
using pii = pair<int,int>;
using pci = pair<char,int>;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //simple number 2 ->repeat only once [8,1,2,2,1,1,2]. ans->8.(appears thrice)
    vector<int> array = {8,1,1,2,1,2,2};
    int simple=0;
    for(int i=0;i<=31;i++){
        int ones=0;
        for(int j=0;j<array.size();j++){
            if(((1<<i) & array[j]) != 0)     ones++;
        }

        if(ones % 3 != 0)   simple = (1<<i) | simple;
    }

    cout<<simple;


    return 0;
}   