#include<iostream>
using namespace std;

int main()
{
    int i,j,a[6];
    for(i=0;i<6;i++)
    {
        cout<<"Enter = ";
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<6;j++){
            if(a[j]<a[i])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }    

    for(i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}