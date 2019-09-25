#include<stdio.h>
int main()
{
    int i, j, n, collum, row, middle_row, middle_collum, start, end, highestnum=0, num=0, high;
    scanf("%d", &n);

    collum = (n*2)-1;
    row = (n*2) -1;
    middle_collum = (collum+1)/2;
    middle_row = middle_collum;

    for(i=1; i<=row; i++)
    {
        highestnum = 0;
        num = 0;
        if(i<=middle_row)
        {
            start = middle_collum-(i-1);
            end = middle_collum +(i-1);
        }
        else
        {
            start = 1+(i-middle_row);
            end = collum - (start-1);
        }

        high = (end-start + 2)/2;

        for(j=1; j<=collum; j++)
        {
            if(j>=start && j<=end)
            {
                if(highestnum == 1)
                {
                    num--;
                }
                else
                {
                    num++;
                    if(num == high)
                    {
                        highestnum = 1;
                    }
                }
                printf("%d", num);
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
