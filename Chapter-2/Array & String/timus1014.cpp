#include<stdio.h>
#include<math.h>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
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
static li array[SIZE];


int main()
{
    li num, i, length=0, current_position=0, tmp;
    bool divided;
    scanf("%lld", &num);

    if(num == 1)
    {
        printf("%lld\n", num);
        return 0;
    }

    if(num == 0)
    {
        printf("10\n");
        return 0;
    }

    while (num > 1)
    {
        divided = false;
        for(i=9; i>=2; i--)
        {
            if(num % i == 0)
            {
                divided = true;
                num = num/i;
                array[current_position] = i;
                current_position = current_position+1;
                length = length+1;
                break;
            }
        }

        if(divided == false)
        {
            break;
        }
    }

    if(num != 1)
    {
        printf("-1\n");
    }

    else
    {
        for(i=(length-1); i>=0 ; i--)
        {
            printf("%lld", array[i]);
        }
    }

    printf("\n");

    return 0;
}










