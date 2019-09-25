#include<stdio.h>
int fact(int n, int cmp)
{
    if(n == cmp)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1, cmp);
    }
}

int main()
{
    int n, r, numerator, denominator, answer;
    scanf("%d %d", &n, &r);

    numerator = fact(n, n-r);

    denominator = fact(r, 1);

    answer = numerator/denominator;

    printf("%d", answer);





    return 0;
}
