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

int insertathead(node* &head,int val)
{   
    node* ptr=new node(val);
    ptr->next=head;
    head=ptr;
    
    return 0;
}
int insertbetween(node* &head,int val)
{
    node* ptr=new node(val);
    node* temp=head;
    int  count=0;
    while(temp->next!=NULL)
    {   
        count++;
        if(count==2)
        {
            ptr->next=temp->next;
            temp->next=ptr;
            break;
        }
        temp=temp->next;

    }

    return 0;
}
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
    int count=0;
    while(temp!=NULL)
    {   
        if(temp->data==key)
        {   
            cout<<"Element is present";
        }
        else{
            count++;
        }
        temp=temp->next;
    }
    if(count==10)
    {
        cout<<"Element not found";
    }

    return 0;
}
int delete_key(node* &head,int position)
{
    int count=0;
    //delete head element
    node* temp=head;
    node* curr=head;
    if(position==1)
    {
        head=head->next;
        delete temp;
    }
    //for middle position
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
    node* ptr=new node(1);
    node* head=ptr;
    int n,b,s,d;
    cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     cin>>b;
    //     insertathead(head,b);
    // }
    for(int i=0;i<n;i++)
    {
        cin>>b;
        insertattail(head,b);
    }
    // insertbetween(head,7);
    show(head);
    cout<<endl;
    cout<<"Element you want to search = ";
    cin>>s;
    search(head,s);
    cout<<endl;
    cout<<"Element you want to delete enter the position = ";
    cin>>d;
    delete_key(head,d); 
    show(head);
    return 0;
}