#include<stdio.h>
#include<math.h>
#include<iostream>
#include<cstring>
using namespace std;


#define db double
#define fl float
#define li long long int
#define uli unsigned long long int
#define pf printf
#define sf(a) scanf("%d", &a)
#define sfd(a) scanf("%lf", &a);
#define sfl(a) scanf("%I64d", &a)
#define sff(a,b) scanf("%d %d", &a, &b)
#define sffl(a,b) scanf("%I64d %I64d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define sfffl(a,b,c) scanf("%I64d %I64d %I64d", &a, &b, &c)
#define sffff(a,b,c,d) scanf("%d %d %d %d", &a, &b, &c, &d)
#define sffffl(a,b,c,d) scanf("%I64d %I64d %I64d %I64d", &a, &b, &c, &d)
#define ms(a,b) memset(a, b, sizeof(a))
#define PI acos(-1) //3.14159265358979323846264338328
#define loop1(i,n) for(int i=0; i<n; i++)
#define loop2(i, s, f) for(int i=s; i<=f; i++)

#define SIZE 1000001
static unsigned short array[SIZE];
int current_position;

void Arrange(unsigned short n)
{
    //printf("in arrange\n");
    //pf("Current Position = %d\n", current_position);

    int tmp = current_position-1;
    //pf("tmp = %d\n", tmp);
    if(current_position == 0)
    {
        array[current_position] = n;
    }

    else
    {
        while(tmp >= 0)
        {
            array[tmp+1] = array[tmp];
            tmp = tmp-1;
        }

    }

    array[0] = n;
    /*for(int i = 0; i<= current_position; i++)
    {
        cout << array[i];
    }
    cout << endl;*/
    current_position = current_position+1;
}

uli DivByTwo(uli n)
{
    unsigned short remainder;
    remainder = n%2;
    Arrange(remainder);
    n = n >> 1;
    return n;
}

int main()
{
    uli Decimal;
    cin >> Decimal;
   // cout << Decimal << endl;
    while(Decimal > 0)
    {
        Decimal = DivByTwo(Decimal);
        //cout << Decimal << endl;
    }

    //Arrange(1);

    loop1(i, current_position)
    {
        cout << array[i];
    }

    return 0;
}




