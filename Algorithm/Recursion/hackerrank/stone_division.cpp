#include<bits/stdc++.h>
using namespace std;

void max_move(vector<long> s,long n,long k)
{
    if(s.size()==0)
    {
        cout<<k;
        return;
    
    }
    
    if(n!=s[0] && n%s[0]==0)
    {
        cout<<"gsd";
        if(s[0]>k)
        {
            k=s[0];
        }
    }

    s.erase(s.begin()+0);

    max_move(s,n,k);

}

int main()
{
    long n=6,k=0;
    vector<long> s;
    s={3};

    max_move(s,n,k);
    return 0;
}