#include<bits/stdc++.h>
using namespace std;

class node{
    

    public:
        node* prev;
        int data;
        node* next;
        node()
        {
            this->data=0;
            this->prev=NULL;
            this->next=NULL;
        }

        node(int val)
        {
            this->data=val;
            this->prev=NULL;
            this->next=NULL;
        }


};

int insertathead(node* &head,int val)
{
    
    node* ptr=new node(val);
    if(head==NULL)
    {
        head=ptr;
        return 0;
    }
    ptr->next=head;
    head->prev=ptr;
    head=ptr;
    
    return 0;
}

int operation_num(node* &head,int val)
{
    int carry=0,d,num;
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    while(temp!=NULL)
    {
        num=(val*temp->data)+carry;
        carry=num/10;
        d=num%10;
        temp->data=d;
        temp=temp->prev;
    }
    while(carry!=0)
    {
        int carr_num=carry%10;
        insertathead(head,carr_num);
        carry=carry/10;
    }
    

    return 0;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}
int main()
{
    node* head=NULL;
    insertathead(head,1);
    int n,i=2;
    cin>>n;
    if(n==0)
    {
        cout<<"1";
    }
    else
    {
        while(i<=n)
        {
            operation_num(head,i);
            i++;
        }
        display(head);
        return 0;
    }
    

    
    return 0;
}