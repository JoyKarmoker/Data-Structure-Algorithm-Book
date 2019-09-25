#include<stdio.h>
#include<math.h>
#include<iostream>
#include<cstring>
using namespace std;


#define db double
#define fl float
#define li long long int
#define uli unsigned long long int
#define pf printf
#define sf(a) scanf("%d", &a)
#define sfd(a) scanf("%lf", &a);
#define sfl(a) scanf("%I64d", &a)
#define sff(a,b) scanf("%d %d", &a, &b)
#define sffl(a,b) scanf("%I64d %I64d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define sfffl(a,b,c) scanf("%I64d %I64d %I64d", &a, &b, &c)
#define sffff(a,b,c,d) scanf("%d %d %d %d", &a, &b, &c, &d)
#define sffffl(a,b,c,d) scanf("%I64d %I64d %I64d %I64d", &a, &b, &c, &d)
#define ms(a,b) memset(a, b, sizeof(a))
#define PI acos(-1) //3.14159265358979323846264338328
#define loop1(i,n) for(int i=1; i<=n; i++)
#define loop2(i, s, f) for(int i=s; i<=f; i++)

#define SIZE 1000001
static unsigned short array[SIZE];

unsigned short Algo(unsigned long n)
{
   // pf("start = %d\n", start);

   if(n < SIZE && array[n] != 0)
   {
       return array[n];
   }

    if(n & 1)
    {//if n is odd
        if(n < SIZE)
        {
            array[n] = 2 + Algo(((3*n) + 1) >> 1); //n=n/2;
            return array[n];
        }
        else
        {
            return 2 + Algo(((3*n) + 1) >> 1); //n = n/2;
        }

    }
    else
    {
        if(n < SIZE)
        {
            array[n] = 1 + Algo(n >> 1); //n=n/2
            return array[n];
        }
        else
        {
            return 1 + Algo(n >> 1); // n = n/2;
        }
    }
}

int main()
{
    unsigned long lower_limit, upper_limit, i, n=3, smaller, greater;
    short big, put;
    array[1] = 1;
    array[2] = 2;

    while(n < SIZE)
    {
        if(array[n] == 0)
        {
            put =  Algo(n);

            array[n] = put;
        }

        n++;
    }


    while(cin >> lower_limit >> upper_limit)
    {
        big = 0;
        if(upper_limit < lower_limit)
        {
            smaller = upper_limit;
            greater = lower_limit;
        }

        else
        {
            smaller = lower_limit;
            greater = upper_limit;
        }

        loop2(i, smaller, greater)
        {
            if(array[i] > big)
            {
                big = array[i];
            }
        }

        pf("%d %d %d\n", lower_limit, upper_limit, big);

    }


    return 0;
}




