#include <iostream>

#include <string>

#include "string.h"

using std::cout; using std::endl; using std::string; using std::cin;

//heloooooo

int main()

{

    string var;

    cout<<"Koks jusu vardas?"<<endl;

    cin>>var;

    int n=var.length();

    if(var[n-1]=='a'||var[n-1]=='e')

    {

        var="Sveika, " + var+"!";

    }

    else if(var[n-2]=='a' && var[n-1]=='s')

    {

        var[n-1]='i';

        var="Sveikas, "+var+"!";

    }

    else if (var[n-2]=='u' && var[n-1]=='s')

    {

        var[n-2]='a';

        var[n-1]='u';

        var="Sveikas, "+var+"!";

    }
    else if (var[n-2]=='i'&&var[n-1]=='s')
    {
        var[n-1]='!';
        var="Sveikas, "+var;
    }
    else
    {
        var="Sveikas, "+var+"!";
    }

    n=var.length();

    for (int i=0;i<n+4;i++)

    {

        cout<<"*";

    }

    cout<<"\n* ";

    for(int i=0;i<n;i++)

    {

        cout<<" ";

    }

    cout<<" *\n* ";

    cout<<var<<" *";

    cout<<"\n* ";

    for(int i=0;i<n;i++)

    {

        std::cout<<" ";

    }

    cout<<" *\n";

    for(int i=0;i<n+4;i++)

    {

        cout<<"*";

    }

    return 0;

}
