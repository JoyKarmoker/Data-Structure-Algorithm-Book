#include<stdio.h>
using namespace std;
int fact(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}
int pow(int base, int exp)
{
    int ans = base, i;

    for(i=1; i<exp; i++)
    {
        ans = ans*ans;
    }
    return ans;
}


int main()
{
    int x, n, i, j, numerator, denominator, exp=2, fact_num=2;
    double sum=1.00, agent;
    scanf("%d %d", &x, &n);

    for(i = 2; i<=n; i++)
    {
        numerator = pow(x, exp);
        denominator = fact(fact_num);
        //printf("numerator %d denominotor %d\n", numerator, denominator);
        agent = (numerator*1.0/denominator*1.0);
        //printf("agent = %lf\n", agent);
        if(i%2 == 0)
        {
            sum = sum-agent;
        }
        else
        {
            sum = sum+agent;
        }
        fact_num = fact_num+2;
        exp = exp+2;
    }

    printf("sum = %lf\n", sum);

    return 0;
}
