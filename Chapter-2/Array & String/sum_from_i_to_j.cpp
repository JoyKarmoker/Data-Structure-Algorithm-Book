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
#define loop1(i,n)for(int i=1; i<=n; i++)
#define loop2(i, s, f) for(int i=s; i<=f; i++)

#define SIZE 1000001
static li array[SIZE];
static li sum[SIZE];


int main()
{
    li x;
    int length, case_no, start, end, CaNo = 1;
    pf("Give the length of the array\n");
    sf(length);
    pf("Give the elements\n");
    loop1(i, length)
    {
        cin>>x;
        array[i] = x;
        sum[i] = sum[i-1] + x;
    }
    pf("Give the query number\n");
    sf(case_no);
    pf("Give i and j\n");
    while(case_no--)
    {
        sff(start, end);

        pf("Case %d: %I64d\n", CaNo++, (sum[end] - sum[start-1]));
    }


    return 0;
}







