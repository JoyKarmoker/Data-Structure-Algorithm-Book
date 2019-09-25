#include<stdio.h>
#define ul unsigned long long int
int main()
{
    ul sum=0, n, i=0;
    scanf("%llu", &n);

    if(n==0)
    {
        printf("0\n");
        return 0;
    }

    start :
        i++;
        sum = sum + i*(n-i + 1);
        if(i != n)
        {
            goto start;
        }

    printf("%llu\n", sum);
    return 0;
}

