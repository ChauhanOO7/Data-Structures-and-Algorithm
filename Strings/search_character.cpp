#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string a="zyxwvutsrqponmlkjihgfedcba ",b;
    int k;
    char c;
    cout<<"Enter the string = ";
    getline(cin,b);
    cout<<"Enter the character for finding the position  = ";
    cin>>c;

    sort(a.begin(),a.end());
    for(int i=0;i<a.length();i++)
    {
       
        if(a[i]==c)
        {
            k=i;
            break;
        }
    }

    cout<<"Position of charater is = ";
    cout<<(k+1);
    return 0;
}