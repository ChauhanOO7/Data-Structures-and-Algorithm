#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr,int n,int index){

    int root=index;
    int left=2*index +1;
    int right=2*index+2;

    if(left < n and arr[root] < arr[left]){

        root=left;
    }

    if(right < n and arr[root] < arr[right]){

        root=right;
    }

    if(root!=index){

        swap(arr[root],arr[index]);
        heapify(arr,n,root);
    }
}
int main(){

    vector<int> arr={40,80,70,10,20,30};

    for(int i=arr.size()/2-1;i>=0;i--){

        heapify(arr,arr.size(),i);
    }

    // heap sort

    for(int i=arr.size()-1;i>0;i--){

        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }

    for(int i=0;i<arr.size();i++){

        cout<<arr[i]<<" ";
    }

    return 0;
}