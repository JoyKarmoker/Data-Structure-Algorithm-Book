#include<stdio.h>
int main()
{
    int n, i, j,  num=1, collum, highest, start, end, highest_reach, highgen;

    scanf("%d", &n);
    collum = (n*2)-1;
    highgen = collum;
    for(i=1; i<=n; i++)
    {
        highest_reach = 0;
        num=1;
        start = i;
        end = collum-i+1;
        highest = (highgen+1)/2;

        for(j=1; j<=collum; j++)
        {

            if(j>=start && j<= end)
            {
                if(num == highest)
                {
                    highest_reach = 1;
                }
                printf("%d", num);
                if(highest_reach == 1)
                {
                    num--;
                }
                else
                {
                    num++;
                }
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
        highgen--;
    }

    return 0;
}
