#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int a,b;
    cin>>a;
    cin>>b;
    int odd=3,result=1,count=0;
    while(result<=b)
    {
        
        if(result>=a && result<=b)
        {
            count++;
        }
        result=result+odd;
        odd+=2;
    }
    cout<<count;
    return 0;
}

  

