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
#define loop1(i,n)for(int i=0; i<n; i++)
#define loop2(i, s, f) for(int i=s; i<=f; i++)

#define SIZE 1000001
static unsigned short array[SIZE];


int main()
{
    int length, x, count_one = 0, big_one = 0, count_zero=0, big_zero = 0;
    sf(length);
    loop1(i, length)
    {
        cin>>x;
        array[i] = x;
    }

    for(int i=0; i<length; i++)
    {
        if( array[i] == 1)
        {
            count_one = count_one + 1;
            //pf("count = %d\n", count);
        }

        else
        {
            count_one = 0;
        }

        if(count_one > big_one)
        {
            big_one = count_one;
        }

        if( array[i] == 0)
        {
            count_zero = count_zero + 1;
            //pf("count zero = %d\n", count_zero);
        }

        else
        {
            count_zero = 0;
        }

        if(count_zero > big_zero)
        {
            big_zero = count_zero;
        }
    }


    if(big_one > big_zero)
    {
        pf("there are more one in a sequence\n");
        pf("%d\n", big_one);
    }

    else
    {
        pf("There are more zeros in one sequence\n");
        pf("%d\n", big_zero);
    }
    return 0;
}






