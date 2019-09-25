#include<stdio.h>
#define Twopow31 2147483648
#include<vector>
#include<math.h>
using namespace std;
int main()
{

    int position;
    int cano;
    double ac, n;

    scanf("%d", &cano);

    while(cano--)
    {

        scanf("%d", &position);
        ac = 4.00 * (position-1)*2 +1;
        //printf("ac = %lf\n" , ac);
        ac = sqrt(ac);
        n = (1+ac)/2;
        //printf("ac = %lf n = %lf\n", ac, n);

        if(n == (int)n)
        {
            printf("1");
        }
        else
        {
            printf("0");

        }
        if(cano == 0)
        {
            printf("\n");
        }
        else
        {
            printf(" ");
        }
    }

    return 0;
}
