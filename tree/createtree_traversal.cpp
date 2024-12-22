#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node* left;
        node* right;
        node(int data)
        {
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
};

node* buildtree(node* root,int value)
{
    node* child=new node(value);
    root=child;
    if(value==-1)
    {
        return NULL;
    }

    int child_value;
    cout<<"left child : ";
    cin>>child_value;

    root->left=buildtree(root->left,child_value);
    int right_value;
    cout<<"right value";
    cin>>right_value;
    root->right=buildtree(root->right,right_value);
    return root;
}

void levelorder(node* root)
{
    queue<node*> store;

    store.push(root);
    store.push(NULL);

    while(!store.empty())
    {
        node* temp=store.front();
        store.pop();

        if(temp==NULL)
        {
            cout<<endl;
            if(!store.empty())
            {
                store.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";

            if(temp->left)  store.push(temp->left);
            if(temp->right) store.push(temp->right);
            
        }

    } 
}

void preorder(node* root)
{
    if(root==NULL)
    {
        return ;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root)
{
    if(root==NULL)
    {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    node* root=NULL;
    int value=1;
    root=buildtree(root,value);
    cout<<endl;
    cout<<"levelorder : "<<endl;
    levelorder(root);
    cout<<"preorder : "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"postorder : "<<endl;
    postorder(root);
    cout<<endl;
    cout<<"inorder : "<<endl;
    inorder(root);
    cout<<endl;

    return 0;
}