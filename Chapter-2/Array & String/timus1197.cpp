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

int Find(int i, int j)
{
    int count = 0, a, b;
    a = i-2;
    b = j-1;

    if(a>0 && a<= 8 && b> 0 && b <=8)
    {
        count = count + 1;
    }

    b = j+1;

    if(a>0 && a<= 8 && b> 0 && b <=8)
    {
        count = count + 1;
    }

    a = i+2;
    b = j-1;

    if(a>0 && a<= 8 && b> 0 && b <=8)
    {
        count = count + 1;
    }

    b = j+1;

    if(a>0 && a<= 8 && b> 0 && b <=8)
    {
        count = count + 1;
    }

    return count;
}

int main()
{
    int array[20][20];

    int T, i, j, count, tmp;
    char c;

    sf(T);

    while(T--)
    {
        count = 0;
        cin >> c;
        cin >> j;

        i = c - 'a' + 1;

        tmp = Find(i, j);

        count = count + tmp;

        tmp = Find(j, i);

        count = count + tmp;

        cout << count<< endl;
    }

    return 0;
}
















