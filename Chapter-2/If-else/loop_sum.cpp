#include<stdio.h>
int main()
{
    int n, sum=1, i, j, start=2, add, k;
    scanf("%d", &n);
    if( n==1)
    {
        printf("1\n");
        return 0;
    }

    for(i=2; i<=n; i++)
    {
        for(j =2; j<=i; j++)
        {
            for(k=1; k<=2; k++, start++)
            {
                if(k==1)
                {
                    sum = sum+start;
                }

                else
                {
                    sum = sum+((start) * (start+1));
                    start++;
                }


            }
        }
    }

    printf("%d\n", sum);

    return 0;
}
