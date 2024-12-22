#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
    ~node()
    {
        if(this->next!=NULL)
        {
            this->next=NULL;
        }
    }

};

int insertincircle(node* &tail,int val)
{
    node* ptr=new node(val);
    if(tail==NULL)
    {
        tail=ptr;
        ptr->next=ptr;
        return 0;
    }
    else
    {
        node* temp=tail;
        temp=tail->next;
        tail->next=ptr;
        ptr->next=temp;
        tail=ptr;
    }
    return 0;
}
int show(node* tail)
{
    node* temp=tail->next;
    while(temp!=tail)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
    return 0;
}

int delete_circleele(node* &tail,int val)
{
    if(tail==NULL)
    {
        cout<<"EMPTY";
    }
    else
    {
        node* temp=tail;
        node* curr=temp->next;
        while(curr->data!=val)
        {
            temp=curr;
            curr=curr->next;
        }
        temp->next=curr->next;
        if(curr==tail)
        {
            tail=temp;
        }
        delete curr;
    }
    return 0;
}

int main()
{
    int n,b,d;
    node* tail=NULL;
    cout<<"Enter Number of Elements = ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>b;
        insertincircle(tail,b);
    }
    show(tail);
    cout<<endl;
    cout<<"Enter the element you want to delete = ";
    cin>>d;
    delete_circleele(tail,d);
    cout<<endl;
    show(tail);
    
    return 0;

}