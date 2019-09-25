#include<stdio.h>
#include<cmath>
int main()
{
    int n, caseno, primenumber=1, middle, j, isprime=1;
    int prime[15050];
    prime[1] = 2;
    double i , limit;
    for(i=3.00; primenumber <=15040 ;i++)
        {
          limit = floor(sqrt(i));
            isprime = 1;
            for(j=2; j<=limit; j++)
            {
                if((int)i%j == 0)
                {
                    isprime = 0;
                    break;
                }
            }
            if(isprime !=0)
            {
                primenumber++;
                prime[primenumber] = i;
            }
        }

    scanf("%d", &caseno);
    while(caseno--)
    {
        scanf("%d", &n);
        printf("%d\n", prime[n]);
    }

    return 0;
}
