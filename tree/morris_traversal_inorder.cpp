// root point to hypothetical tree so code can not run.

#include<bits/stdc++.h>
using namespace std;

class tree{

    public:
        int val;
        tree* left;
        tree* right;

        tree(int val){
            this.val=val;
            this.left=left;
            this.right=right;
        }
}
int main(){

    vector<int>  nodes;
    tree* root=NULL;    //hypothetical tree;
    tree* curr=root;

    while(curr!=NULL){

        if(curr->left == NULL){
            nodes.push_back(curr->val);
            curr=curr->right;
        }
        else{

            tree* prev=curr->left;

            while(prev->right and prev->right!=curr){

                prev=prev->right;
            }

            if(prev->right == NULL){

                prev->right=curr;
                curr=curr->left;
            }
            else{

                prev->right=NULL;
                nodes.push_back(curr->val);
                curr=curr->right;
            }
        }
    }
    return 0;
}