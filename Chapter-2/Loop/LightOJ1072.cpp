#include<stdio.h>
#include<math.h>
#include<iostream>
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

int main()
{
    int cano, n;
    db  R, r, angle;
    sf(cano);

    loop1(t, cano)
    {
        sfd(R);
        sf(n);

        angle = sin(PI/n);

        r = (R*angle)/(1+angle);

        pf("Case %d: %lf\n", t, r);

    }

    return 0;
}

