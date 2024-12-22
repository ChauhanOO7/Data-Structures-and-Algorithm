#include<bits/stdc++.h>
using namespace std;

bool check(int x,int y,vector<vector<int>> obstacles)
{
    for(int i=0;i<int(obstacles.size());i++)
    {
        if(obstacles[i][0]==x && obstacles[i][1]==y)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,rq=4187,cq=5068;
    cin>>n;
    vector<vector<int>> obstacles;
    vector<int> o1,o2,o3;

    // o1={5,5};
    // o2={4,2};
    // o3={2,3};

    // obstacles.push_back(o1);
    // obstacles.push_back(o2);
    // obstacles.push_back(o3);
   

    //logic part

    // for top-down
    int x=rq,y=cq,count=0;
    while(x<=n && x>=1)
    {
        
        if(check(x,y,obstacles))
        {
            count++;
        }
        else
        {
            break;
        }
        x++;
    }
    x=rq;
    while(x>=1 && x<=n)
    {
        
        if(check(x,y,obstacles))
        {
            count++;
           
        }
        else
        {
            break;
        }
        x--;
    }
    // left to right    
    x=rq;
    while(y<=n && y>=1)
    {
        
        if(check(x,y,obstacles))
        {
            count++;
        }
        else
        {
            break;
        }
        y++;
    }
    y=cq;
    while(y>=1 && y<=n)
    {
        
        if(check(x,y,obstacles))
        {
            count++;
        }
        else
        {
            break;
        }
        y--;
    }
    y=cq;
    //for diagonal

    while(x>=1 && x<=n && y>=1 && y<=n)
    {
        if(check(x,y,obstacles))
        {
            count++;
        }
        else
        {
            break;
        }
        x++;
        y++;
    }
    x=rq,y=cq;
    
    while(x>=1 && x<=n && y>=1 && y<=n)
    {
        if(check(x,y,obstacles))
        {
            count++;
        }
        else
        {
            break;
        }
        x++;
        y--;
    }
    x=rq,y=cq;

    while(x>=1 && x<=n && y>=1 && y<=n)
    {
        if(check(x,y,obstacles))
        {
            count++;
        }
        else
        {
            break;
        }
        x--;
        y++;
    }
    x=rq,y=cq;

    while(x>=1 && x<=n && y>=1 && y<=n)
    {
        if(check(x,y,obstacles))
        {
            count++;
        }
        else
        {
            break;
        }
        x--;
        y--;
    }
    cout<<count-8;
    return 0;
}