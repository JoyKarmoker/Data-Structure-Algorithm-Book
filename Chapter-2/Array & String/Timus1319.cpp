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
int array[150][150];
int n;
int num = 1;

void arrange(int i, int j)
{

    while(i<=n && j<=n)
    {
        array[i][j] = num;
        num++;
        j = j+1;
        i = i+1;
    }

}

int main()
{
    int  i, j;
    sf(n);
    j = n;
    while(j>=1)
    {
        arrange(1, j);
        j--;
    }

    i=2;
    while(i<=n)
    {
        arrange(i, 1);
        i++;
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<n; j++)
        {
            pf("%d ", array[i][j]);
        }

        pf("%d\n", array[i][j]);
    }

    return 0;
}
