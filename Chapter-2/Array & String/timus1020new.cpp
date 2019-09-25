#include<stdio.h>
#include<math.h>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
#include<stdlib.h>
using namespace std;

#define db double
#define fl float
#define li long long int
#define uli unsigned long long int
#define pf printf
#define sf(a) scanf("%d", &a)
#define sfd(a) scanf("%lf", &a)
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
#define MAX_IN_ULI 99999999999

int main()
{
    double ans, angle, arc_length, total_arc_length, radius, rope_length, real_distance = 0, tmp;
    int n, i;
    double x[150], y[150];

    scanf("%d", &n);
    scanf("%lf", &radius);

    for(i=1; i<=n; i++)
    {
        scanf("%lf", &x[i]);
        scanf("%lf", &y[i]);
    }

    x[i] = x[1];
    y[i] = y[1];

    for(i=1; i<=n; i++)
    {
        tmp = sqrt((x[i] - x[i+1])*(x[i] - x[i+1]) + (y[i] - y[i+1])*(y[i] - y[i+1]));
        real_distance = real_distance + tmp;
    }

    rope_length = real_distance + 2*PI*radius;

    printf("%0.2lf\n", rope_length);

}












