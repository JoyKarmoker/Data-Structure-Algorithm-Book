#include<stdio.h>
int main()
{
    int i, j, n, collum, diff, middle, cmp1, cmp2;
    scanf("%d", &n);
    collum = (n*2) - 1;
    middle = (collum+1)/2;
    //printf("Middle = %d\n", middle);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=collum; j++)
        {
           cmp1 = middle-(i-1);
           cmp2 = middle+(i-1);
           if(j>=cmp1 && j<=cmp2)
           {
               printf("*");
           }
           else
           {
               printf(".");
           }
        }
        printf("\n");
    }


    return 0;
}
