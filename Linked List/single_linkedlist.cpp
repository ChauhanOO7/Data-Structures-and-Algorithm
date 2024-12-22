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
int insertattail(node* &head,int val)
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
int search(node* head,int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            cout<<"Element is found.";
            return 0;
        }
        temp=temp->next;
    }
    cout<<"Element is not found.";
    return 0;
}

int delete_key(node* &head,int position)
{
    int count=0;
    node* temp=head;
    node* curr=head;
    if(position==1)
    {
        head=head->next;
        delete temp;
    }
    else
    {
        while(temp!=NULL)
        {
           count++;
           if(count==(position-1))
           {
                curr=temp;
           }
           if(count==position)
           {
                curr->next=temp->next;
                delete temp;
           }
            temp=temp->next;
        }
    }
    return 0;
}

int main()
{
    node* head=NULL;
    int n,b,s,d;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        insertattail(head,b);
    }
    cout<<"Linked List = ";
    show(head);
    cout<<endl;
    cout<<"Element you want to search = ";
    cin>>s;
    search(head,s);
    cout<<endl;
    cout<<"Position of element you want to delete = ";
    cin>>d;
    delete_key(head,d);
    cout<<"New list = ";
    show(head);
    
return 0;
}