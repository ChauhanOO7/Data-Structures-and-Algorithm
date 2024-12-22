#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        int size;
        int top;
        int* ptr;
    Stack(int size)
    {
        this->size=size;
        ptr=new int[size];
        top=-1;

    }
    void push(int val){
        if(top!=size)
        {
            top++;
            ptr[top]=val;
        }
        else
        {
            cout<<"Overflow.";
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"list is empty.";
            

        }
        else
        {
            top--;
            cout<<"Element is deleted.";
        }
    }
    int peek()
    {
        if(top<0)
        {
            cout<<"List is empty.";
            return 0;
        }
        else
        {
            return ptr[top];
        }
    }
    bool isempty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
};


int main()
{
    Stack s(10);
    for(int i=0;i<10;i++)
    {
        s.push(i);
    }
    cout<<s.peek();
    cout<<endl;
    s.pop();
    cout<<endl;

    cout<<s.peek();

    cout<<endl;
    if(s.isempty())
    {
        cout<<"List is empty.";

    }
    else
    {
        cout<<"List is not empty.";
    }


    
    return 0;

}