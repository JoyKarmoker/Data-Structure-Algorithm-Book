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
#define loop1(i,n)for(int i=0; i<=n; i++)
#define loop2(i, s, f) for(int i=s; i<=f; i++)
#define SIZE 1000001
#define MAX_IN_ULI 99999999999

int array[500];

int cal(int n)
{
    int ans;
    ans = n/2;
    ans = ans+1;

     return ans;

}

int main()
{
    int n, i, required_group, member=0, people;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
      scanf("%d", &array[i]);
    }

    required_group = (int) floor(n/2.0);

    sort(array, array+n);

    loop1(i, required_group)
    {
        people = cal(array[i]);
        member = member + people;
        //printf("people = %d\n", people);
    }

    printf("%d\n", member);

    return 0;
}














