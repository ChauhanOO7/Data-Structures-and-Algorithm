#include<iostream>
using namespace std;

int main()
{
    int i,e,j,a[6];
    for(e=0;e<6;e++)
    {
        cout<<"Enter = ";
        cin>>a[e];
    }

     for(e=0;e<6;e++)
    {
        cout<<a[e]<<" ";
    }
    cout<<endl;

    for(i=1;i<6;i++)
    {
        for(j=0;j<(6-i);j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(e=0;e<6;e++)
    {
        cout<<a[e]<<" ";
    }
    return 0;
}