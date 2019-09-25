#include<stdio.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, sum, mul;
    string name;

    sum = a+b;
    mul = a*b;

    printf("what is your name?\n");

    cin >> name;

    if(name =="Shoummo")
    {
        printf("Shoummo is very bad\n");
    }
    else if(name == "shoummo")
    {
         printf("Shoummo is very good");
    }

    else

    {
        cout << name << " is good" << endl;
    }




    return 0;
}
