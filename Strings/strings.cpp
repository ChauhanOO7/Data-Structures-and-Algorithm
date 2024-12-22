#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b,c="121";
    int y=435;
    getline(cin,a);
    getline(cin,b);
    cout<<a;
    cout<<endl;
    cout<<b;
    cout<<endl;
    cout<<a[5];
    cout<<endl;
    cout<<a.compare(b);
    cout<<endl;
    cout<<a.erase(3,7);
    cout<<endl;
    cout<<a.find("au");
    cout<<endl;
    cout<<a.insert(3,"soul");
    cout<<endl;
    cout<<a.length();
    cout<<endl;


    if(a.compare(b)==0){
        cout<<"are equal";
    }
    else{
        cout<<"are not equal";
    }
    cout<<endl;
    for(int i=0;i<a.length();i++)
    {
        cout<<a[i];
        cout<<endl;
    }
  
    cout<<a.substr(3,7);
    cout<<endl;

    int x=stoi(c);
    x=x+2;
    cout<<x;
    cout<<endl;

    cout<<(to_string(y)+"2")<<endl;

    return 0;
}