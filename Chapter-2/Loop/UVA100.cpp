#include<stdio.h>
#include<math.h>
#include<iostream>
#include<cstring>
using namespace std;
int array[30000];

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

int Algo(int n)
{
    int count = 0;
    pf(" n = %d\n", n);
    start:
        if(n%2 == 0)
        {
            n = n/2;
           pf(" n = %d\n", n);
            if(n > 30000)
            {
                pf("Count = %d\n", count);
                count++;
                goto start;
            }
            if(array[n] != 0)
            {
                return array[n] +1 +count;
            }
        }
        else
        {
            n = (3*n) + 1;
            pf(" n = %d\n", n);
            if(n>30000)
            {
                pf("count = %d\n", count);
                count++;
                goto start;
            }
            if(array[n] !=0)
            {
                return array[n] +1 +count;
            }
        }

        goto start;
}

int main()
{
    int lower_limit, upper_limit, i, put, big = 0, n=10000;
    ms(array, 0);
    array[2] = 1;

    while(n==10000)
    {
        put = Algo(4);
        array[4] = put;
        n--;
    }

    put = Algo(8);
    array[8] = put;


    //sff(lower_limit, upper_limit);



        pf("array[%d] = %d\n", 8, array[8]);


    return 0;
}


