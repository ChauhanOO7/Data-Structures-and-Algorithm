#include<bits/stdc++.h>
using namespace std;

using lli = long long int;
using pii = pair<int,int>;
using pci = pair<char,int>;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //simple number->repeat only once [8,1,2,1,2]. ans->8.

    vector<int> array = {8,1,2,1,2};
    int simple=0;
    for(int i=0;i<array.size();i++){
        simple = simple ^ array[i];
    }

    cout<<simple<<'\n';

    return 0;
}