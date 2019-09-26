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
int finalTake[35];
int finalReject[35];
int takeLength[35];
int rejectLength[35];
int p;

void inputFunction(int index, int length)
{
    int tmp1 = 0, tmp2 = 0, i, tmp3=0, tmp4=0;
    char c;

    for(i=0; i<length; i++)
    {
        cin >> c;
        if (c == '+')
        {
            tmp1++;
            sf(take[index][tmp3]);
            tmp3++;
        }
        else{
            tmp2++;
            sf(reject[index][tmp4]);
            tmp4++;
        }
    }
    takeLength[index] = tmp1;
    rejectLength[index] = tmp2;
}
bool match(int first[], int second[], int firstLength, int secondLength)
{
    int i , j;

    for(i=0; i<firstLength; i++)
    {
        for(j=0; j<secondLength; j++)
        {
            if(first[i] == second[j])
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int T, n, m, k, i, j, limit, finalTakeLength, finalRejectLength, index1=0, index2=0, wish;
    bool takeSimilar, rejectSimilar;
    int cano = 1;
    sf(T);

    while(T--)
    {
        sfff(n, m, k);
        index1 = 0;
        index2 = 0;
        wish = 0;

        for(i=0; i<n; i++)
        {
            inputFunction(i, k);
        }

        sf(p);
        finalTakeLength = p;
        finalRejectLength = m-p;

        for(i=0; i<p; i++)
        {
            sf(finalTake[i]);
        }

        sort(finalTake, finalTake+p);

        for(i=1; i<=m ; i++)
        {
            if(finalTake[index1] != i)
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
            takeSimilar = match(take[i], finalTake, takeLength[i], finalTakeLength);
            rejectSimilar = match(reject[i], finalReject, rejectLength[i], finalRejectLength);

            if(takeSimilar || rejectSimilar)
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

       /* pf("Take: \n");
        for(i=0; i<n; i++)
        {
            limit = takeLength[i];
            for(j=0; j< limit; j++)
            {
                pf("%d ", take[i][j]);
            }
            pf("\n");
        }

        pf("\nReject:\n");
        for(i=0; i<n; i++)
        {
            limit = rejectLength[i];
            for(j= 0 ; j<limit; j++)
            {
                pf("%d ", reject[i][j]);
            }
            pf("\n");
        }

        pf("Final Take : ");
        for(i=0; i<finalTakeLength; i++)
        {
            pf("%d ", finalTake[i]);
        }
        pf("\n");

        pf("Final Reject: ");
        for(i=0; i<finalRejectLength; i++)
        {
            pf("%d ", finalReject[i]);
        }
        pf("\n");*/

        for(i=0; i<n; i++)
        {
            ms(take[i], 0);
            ms(reject[i], 0);
        }

        ms(finalTake, 0);
        ms(finalReject, 0);
        ms(takeLength, 0);
        ms(rejectLength, 0);
    }


    return 0;
}


