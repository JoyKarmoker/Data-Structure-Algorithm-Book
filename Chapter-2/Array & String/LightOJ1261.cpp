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
int take[35][35];
int reject[35][35];
int finalSelect[35];
int finalReject[35];
int p;


bool takeMatch(int first[], int second[])
{

    int i, j;

    for(i=0; i<30; i++)
    {
        for(j=0; j<p; j++)
        {
            if(first[i] != 0 && first[i] == second[j])
            {
                return true;
            }
        }
    }

    return false;
}


bool rejectMatch(int first[], int second[])
{

    int i, j, cmp;
    cmp = 30-p;

    for(i=0; i<30; i++)
    {
        for(j=0; j<cmp; j++)
        {
            if(first[i] != 0 && first[i] == second[j])
            {
                return true;
            }
        }
    }

    return false;
}
int main()
{
    int T, n, m, k, wish, i, j, length_in_take, length_in_reject, index1, index2;
    int cano = 1;
    char c;
    sf(T);

    while(T--)
    {
        wish = 0;
        sfff(n, m, k);

        for(i=0; i<n; i++)
        {
            length_in_reject = 0;
            length_in_take = 0;
            for(j=0; j<k; j++)
            {
                cin >> c;

                if(c == '+')
                {
                    sf(take[i][length_in_take]);
                    length_in_take++;
                }

                else
                {
                    sf(reject[i][length_in_reject]);
                    length_in_reject++;
                }
            }
        }

        sff(p, m);

        for(i=0; i<p; i++)
        {
            sf(finalSelect[i]);
        }

        sort(finalSelect, finalSelect+p);
        index1 = 0;
        index2 = 0;
        for(i=1; i<=m; i++)
        {
            if(finalSelect[index1] != i)
            {
                finalReject[index2] = i;
                index2++;
            }
            else
            {
                index1++;
            }

        }


        for(i=0; i<n; i++)
        {
            if(takeMatch(take[i], finalSelect)  || rejectMatch(reject[i], finalReject))
            {
                wish++;
            }
        }

        if(wish == n)
        {
            pf("Case %d: Yes\n", cano++);
        }

        else
        {
            pf("Case %d: No\n", cano++);
        }

        for(i=0; i<n; i++)
        {
            ms(take[i], 0);
            ms(reject[i], 0);
        }
        ms(finalSelect, 0);
        ms(finalReject, 0);
    }


    return 0;
}

