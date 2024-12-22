#include<bits/stdc++.h>
using namespace std;

class node{

    public:
        int value;
        node* left;
        node* right;
        node(int value)
        {
            this->value=value;
            this->left=NULL;
            this->right=NULL;
        }
};

node* insertnode(node* root,int value)
{
    node* ptr=new node(value);

    if(root==NULL)
    {
        root=ptr;
        return root;
    }

    if(value <= root->value)
    {
        root->left=insertnode(root->left,value);
    }
    else
    {
        root->right=insertnode(root->right,value);
    }

    return root;
}

void inorder(node* root)
{
    if(root==NULL)
    {
        return ;
    }

    inorder(root->left);
    cout<<root->value<<" ";
    inorder(root->right);
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
            cout<<temp->value<<" ";

            if(temp->left)  store.push(temp->left);
            if(temp->right) store.push(temp->right);
            
        }

    } 
}

node* searchnode(node* root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }

    if(key < root->value)
    {
        root=searchnode(root->left,key);
    }
    else if(key > root->value)
    {
        root=searchnode(root->right,key);
    }

    return root;

}

node* deletenode(node* root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }

    if(key < root->value)
    {
        root->left=deletenode(root->left,key);
        return root;
    }
    else if(key > root->value)
    {
        root->right=deletenode(root->right,key);
        return root;
    }
    

    //deleted node have atmost 1 child.

    if(root->left==NULL)
    {
        node* curr=root->right;
        delete root;
        return curr;
    }
    else if(root->right==NULL)
    {
        node* curr=root->left;
        delete root;
        return curr;
    }
    else
    {
        //deleted node have two children.

        node* parent=root;
        node* child=parent->right;

        while(child->left!=NULL)
        {
            parent=child;
            child=child->left;
        }

        if(parent!=root)
        {
            parent->left=child->right;
        }
        else
        {
            parent->right=child->right;
        }

        root -> value = child -> value;

        delete child;
        return root;
    }
   
}


int main()
{
    node* root=NULL;

    int n;
    int data;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cout<<"enter the node value : ";
        cin>>data;
        root=insertnode(root,data);
    }
    
    inorder(root);
    cout<<endl;

    levelorder(root);

    node* result=searchnode(root,6);

    if(result)  cout<<result->value;
    else    cout<<"no";

    root=deletenode(root,8);
    
    cout<<endl;
    levelorder(root);
    
    return 0;
}