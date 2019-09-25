#include<iostream>
#include<sstream>
#include<cstring>
#include<stdio.h>
using namespace std;

int main()
{
    char line[100];
    string s;
    gets(line);

    istringstream iS(line);

    while(iS >> s)
    {
        cout << s << endl;
    }

    return 0;
}
