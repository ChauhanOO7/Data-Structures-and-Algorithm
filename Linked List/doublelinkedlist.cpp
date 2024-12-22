#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    node* prev;
    int data;
    node* next;
    node(int val)
    {
        prev=NULL;
        data=val;
        next=NULL;
    }
    ~node();
};
int insertelement(node* &head,int val)
{
    node* ptr=new node(val);
    if(head==NULL)
    {
        head=ptr;
        return 0;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->prev=temp;
    return 0;
}
int show(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}
int reverse_list(node* head)
{
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
   
    while(temp->prev!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<temp->data;
    return 0;
}
int main()
{   
    node* head=NULL;
    int n,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        insertelement(head,b);
    }
    cout<<"The Linked List = ";
    show(head);
    cout<<endl;
    cout<<" Reverse List = ";
    reverse_list(head);
    cout<<endl;
    cout<<"Delete Same as single linked list.";

    return 0;
}