#include<bits/stdc++.h>
using namespace std;

using lli = long long int;
using pii = pair<int,int>;
using pci = pair<char,int>;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //simple 3-> everynumber present twice except only one.

    vector<int> array = {4,6,1,1,2,2};
    int n=array.size();
    int simple1=0,simple2=0,result=0;

    for(int i=0;i<n;i++){
        result = result ^ array[i];
    }
 
    int rightmost = (result&(result-1)) ^ result;
   
    for(int j=0;j<n;j++){

        if(array[j] & rightmost){
            simple1 = simple1 ^ array[j];
        }
        else{
            simple2 = simple2 ^ array[j];
        }
    }

    cout<<simple1<<" "<<simple2;

    return 0;
}
