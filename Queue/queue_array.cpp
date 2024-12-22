#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int size;
    int front;
    int* arr;
    int rear;
    Queue()
    {
        size=5;
        arr=new int[size];
        front=rear=-1;
    }

    int enqueue(int val)
    {
        if(front==-1 && rear==(size-1) || rear==(front-1)%(size-1))
        {
            cout<<"Queue is full.";
        }
        else if(front==-1 && rear==-1)
        {
            front=rear=0;
            
        }
        else if(front!=0 && rear==(size-1))
        {
            rear=0;
        }
        else
        {
            rear++;
        }
        arr[rear]=val;
        return 0;
    }
    int dequeue()
    {
        if(front==-1)
        {
            cout<<"Empty.";
        }
        else if(front==rear)
        {
            front=rear=-1;
        }
        else if(front==(size-1))
        {
            front=0;
        }
        else
        {
            front++;
        }
        return 0;
    }
    int back()
    {
        return arr[rear];
    }
    int front_ele()
    {
        return arr[front];
    }
    bool empty()
    {
        if(front==-1)
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
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout<<q.back();
    q.dequeue();
    cout<<endl;
    cout<<q.front_ele();
    cout<<endl;
    if(q.empty())
    {
         cout<<"Empty.";
    }
    else
    {
        cout<<"Not empty.";
    }

    return 0;
}