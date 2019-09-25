#include<stdio.h>
unsigned long long int addingNumber(int n)
{
    unsigned long long int ans = n%10;

    return ans;
}

unsigned long long int reverse(long long int n)
{
    unsigned long long int rev = 0, i;

    for(i = n; i>0; i= i/10)
    {
        rev = (rev*10) +(i%10);
    }

    return rev;
}
unsigned long long int pow(unsigned long long int base, unsigned long long int exp)
{
    if(exp == 1)
    {
        return base;
    }

    else
    {
        return base * pow(base, exp-1);
    }
}

unsigned long long int numberOfDigits(unsigned long long int n)
{
     unsigned long long int length = 0, i;

     for(i = n; i>0; i=i/10)
     {
         length++;
     }
    return length;
}
int main()
{

    unsigned long long int palindrome[150000], real[150], adding_margin[15];
    unsigned long long int index = 0, i, n = 1, number_to_add, tmp, j, num, k, limit;
    unsigned long long int remainder, count, base;

    adding_margin[1] = 10;
    for(i = 2; i<=10; i++)
    {
        adding_margin[i] = adding_margin[i-1] * 10 +10;
    }

    for(i=1; i<=9; i++, index++)
    {
        palindrome[index] = i;
    }

    for(i =((n-1)*9) ; index<=100000; index++)
    {

        if(n%2 != 0)
        {
            number_to_add = addingNumber(palindrome[i]);
            palindrome[index] = palindrome[i] * 10 + number_to_add;
        }

        else
        {
            number_to_add = addingNumber(palindrome[i]);
            palindrome[index] = palindrome[i] * 100 + number_to_add;
        }

        if((i+1) % 9 == 0 && n%2 !=0)
        {
            i = i-8;
            n++;
        }

        else if((i+1) % 9 == 0 && n%2 == 0)
        {
            i++;
            n++;
        }

        else
        {
            i++;
        }
    }


    for(i=0; i<9; i++)
    {
        for(j = 3; j<=6; j++, index++)
        {
            number_to_add = addingNumber(palindrome[i]);
            num = pow(10, j);
            palindrome[index] = (palindrome[i] * num) + number_to_add;

        }

    }

    for(i=0, j=2; i<index; i++)
    {
        real[1] = 0;
        tmp = reverse(palindrome[i]);

        if(tmp == palindrome[i])
        {
            real[j] = palindrome[i];
            j++;
        }
    }

    limit = j;

    for(i=0; i<limit; i++)
    {
        count = numberOfDigits(real[i]);


        if(count > 2)
        {

            tmp = real[i] /10;
            remainder = real[i]%10;
            if(count-2 == 0)
            {
                tmp = tmp-(10*remainder);
            }
            else
            {
                tmp = tmp - (pow(10, (count-2)) * remainder);
            }


            base = real[i];

            if(tmp == 0)
            {
                // printf("tmp = %llu\n", tmp);
                 //printf("Base %llu\n", base);
                 //printf("real[%llu] = %llu\n", i, real[i]);
                  //printf("count = %llu\n", count);

                for(k = 1; k<10; k++)
                {
                    if(k == remainder)
                    {
                        continue;
                    }
                    else
                    {
                        real[j] = base + adding_margin[count-2] * k;
                        //printf("real[%llu] = %llu\n", j, real[j]);
                        j++;
                    }
                }
            }
        }
    }

    limit = j;

    for(i=1; i<limit; i++)
    {
        for(j=i+1; j<=limit; j++)
        {
            if(real[j] < real[i])
            {
                tmp = real[i];
                real[i] = real[j];
                real[j] = tmp;
            }
        }
    }

    printf("Limit = %llu\n", limit);
    for(i=1; i<=limit; i++)
    {
        printf("%llu\n", real[i]);
    }

    printf("Give the value of n\n");
    scanf("%llu", &n);

    if(n == 1)
    {
        printf("0\n");
    }

    else
    {
        printf("%llu\n", real[n]);
    }

    return 0;
}
