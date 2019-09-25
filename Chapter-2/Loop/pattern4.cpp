#include<stdio.h>
int main()
{
    int i, j, n, row, collum, middle_collum, start, end, middle_row;

    scanf("%d", &n);
    row = (n*2)-1;
    collum = (n*2)-1;
    middle_collum =(collum+1)/2;
    middle_row = middle_collum;
    printf("middle cllum = %d middle row = %d\n", middle_collum, middle_row);

    for(i=1; i<=row; i++)
    {
        if(i<=middle_row)
        {
            start = middle_collum - (i-1);
            end  = middle_collum +(i-1);
        }

        else
        {
            start = 1+(i-middle_row);
            end = collum-(start-1);
        }
        for(j=1; j<=collum; j++)
        {
            if(j>=start && j<=end)
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
