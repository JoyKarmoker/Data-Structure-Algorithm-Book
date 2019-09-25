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
    int length, big=0, count = 0, x;
    scanf("%d", &length);
    pf("length = %d\n", length);
    for(int i=0; i<length; i++)
    {
        cin >> x;
        array[i] = x;

        if( x == 1)
        {
            count = count + 1;
            pf("count = %d\n", count);
        }

        else
        {
            count = 0;
        }

        if(count > big)
        {
            big = count;
        }
    }

    cout << big;

    return 0;
}





