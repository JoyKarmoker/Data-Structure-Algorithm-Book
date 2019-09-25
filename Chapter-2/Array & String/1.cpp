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

int main()
{
    char sentence[100];
    char word[100][20];
    int i, j, start, word_no=0, length;

    gets(sentence);
    length = strlen(sentence);
    cout << endl;

    for(i=0; i<length ; i++)
    {
        for(j=0; ; i++, j++)
        {
            //printf("word no = %d j=%d\n", word_no, j);
            if(sentence[i] == ' ' || sentence[i] == '\0')
            {
                word[word_no][j] = '\0';
                //pf("first break\n");
                break;
            }
            word[word_no][j] = sentence[i];
            //printf("word[%d][%d] = %c\n", word_no, j, sentence[i]);

        }
        word_no++;
    }
    loop1(i, word_no)
    {
        printf("%s\n", word[i]);
    }


    return 0;
}





