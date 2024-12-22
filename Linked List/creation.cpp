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

   
};
int insertatend(node* &head,int val)
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

    return 0;

}
// int insertathead(node* &head,int val)
// {
//     node* ptr=new node(val);
//     ptr->next=head;
//     head=ptr;
//     return 0;
// }
int show(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    return 0;
}


int main()
{
    node* ptr=new node(3);
    node* head=ptr;
    insertatend(head,4);
    insertatend(head,5);
    // insertathead(head,4);
    // insertathead(head,5);
    show(head);

    return 0;
}