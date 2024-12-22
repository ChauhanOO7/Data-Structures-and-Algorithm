#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr,int index){

    int root=index;
    int left=2*index + 1;
    int right=2*index + 2;

    if(left < arr.size() and arr[root] < arr[left]){

        root=left;
    }

    if(right < arr.size() and arr[root] < arr[right]){

        root=right;
    }

    if(root!=index){

        swap(arr[root],arr[index]);
        heapify(arr,root);
    }


}

int main(){

    vector<int> arr={40,60,30,10,80};

    for(int i=arr.size()/2-1;i>=0;i--){

        heapify(arr,i);
    }

    for(int i=0;i<arr.size();i++){

        cout<<arr[i]<<" ";
    }

    return 0;
}