#include<bits/stdc++.h>
using namespace std;

int main(){
    string a; cin >> a;
    string b; cin >> b;

    int hours1 = (a[0] - '0') * 10 + (a[1] - '0');
    int hours2 = (b[0] - '0') * 10 + (b[1] - '0');

    int minutes1 = (a[3] - '0') * 10 + (a[4] - '0');
    int minutes2 = (b[3] - '0') * 10 + (b[4] - '0');

    int total1 = hours1 * 60 + minutes1;
    int total2 = hours2 * 60 + minutes2;

    int avgMinutes = (total1 + total2) / 2;

    int avgh = avgMinutes / 60;
    int avgm = avgMinutes % 60;

    string ans = "";
    if(avgh<=9){
        ans += "0";
        ans += to_string(avgh);
    }
    else{
        ans += to_string(avgh);
    }
    ans += ":";
    if(avgm<=9){
        ans += "0";
        ans += to_string(avgm);
    }
    else{
        ans += to_string(avgm);
    }
    cout<<ans<<endl;
    return 0;
}