#include <iostream>
#include<string>
#include "string.h"
using namespace std;

int main()
{
    string var;
    cout<<"Koks jusu vardas?"<<endl;
    cin>>var;
    int n=var.length();
    char a[2];
    a[0]=var[n-2];
    a[1]=var[n-1];
    string sv;
    if(a[1]=='a'||a[1]=='e')
    {
        sv="Sveika, ";
    }
    else if(a[0]=='a')
    {
        var[n-1]='i';
        sv="Sveikas, ";
    }
    else
    {
        var[n-2]='a';
        var[n-1]='u';
        sv="Sveikas, ";
    }
    sv=sv+var+"!";
    n=sv.length();
    for (int i=0,i<n+4,i++)
    {
        cout<<"*";
    }
    cout<<"\n* ";
    for(int i=0,i<n,i++)
    {
        cout<<" ";
    }
    cout<<" *\n* ";
    cout<<sv<<" *";
    cout<<"\n* ";
    for(int i=0,i<n,i++)
    {
        cout<<" ";
    }
    cout<<"*\n";
    for(int i=0,i<n+4,i++)
    {
        cout<<"*";
    }
    return 0;
}
