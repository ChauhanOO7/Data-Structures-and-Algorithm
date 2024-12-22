#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {

        q.push(i);
    }
    cout<<q.front()<<" ";
    cout<<q.back()<<" ";
    q.pop();
    cout<<q.front();
    cout<<endl;
    if(q.empty()){
        cout<<"empty.";

    }
    else
    {
        cout<<"not empty.";
    }
    cout<<endl;
    cout<<q.size();
    return 0;
}