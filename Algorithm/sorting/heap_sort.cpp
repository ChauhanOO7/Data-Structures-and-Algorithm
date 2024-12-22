#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int> &v,int size,int index)
{
    int root=index;
    int left=2*index + 1;
    int right=2*index +2;          
 
    if(left<size && v[root]<v[left])
    {
        root=left;
    }
    if(right<size && v[root]<v[right])
    {                                              
        root=right;                
    }
    if(root!=index)
    {
        swap(v[root],v[index]);
        heapify(v,size,root);
    }
    return;

}
void heap_sort(vector<int> &v,vector<int> &m,int size)
{
    while(size>0)
    {
        swap(v[0],v[size-1]);
        m.push_back(v[size-1]);
        size--;

        heapify(v,size,0);
    }
    
}
int main()
{
    vector<int> v={54,53,55,52,50};
    vector<int> m;
    int size=v.size();
    
    for(int i=size/2;i>=0;i--)
    {
        heapify(v,size,i);
    }

    heap_sort(v,m,size);

    for(int i=0;i<int(m.size());i++)
    {
        cout<<m[i]<<" ";
    }

    return 0;
}