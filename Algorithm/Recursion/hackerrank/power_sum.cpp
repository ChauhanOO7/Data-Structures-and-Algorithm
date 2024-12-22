#include<bits/stdc++.h>
using namespace std;

void combinations(int start,int X,int N,int &count,int sum)
{
    if(sum>=X)
    {
        if(sum==X)
        {
            count++;
        }
        
        return;
    }

    if(pow(start,N)>X)
    {
        return;
    }
    int sum1=sum+pow(start,N),sum2=sum;
    combinations(start+1,X,N,count,sum1);
    combinations(start+1,X,N,count,sum2);
    
}

int main()
{
    int X=1,N=2,count=0,start=1,sum=0;
    
    combinations(start,X,N,count,sum);
    cout<<count;
    return 0;
}