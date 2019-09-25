#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int fact(int n, int limit, int k)
{
    static int diff = 0;
    static int fix =  n;
    diff =  diff+1;

    //printf(" n = %d diff = %d\n", n, diff);
    if(n<limit)
    {
        return 1;
    }
    else if(n==limit)
    {
        return n;
    }
    else
    {
        return n * fact((fix - (diff)*k), limit, k);
    }
}
int main()
{
    int n, k, mod, limit, ans;
    string x;
    scanf("%d", &n);
    cin >> x;
    k = x.size();
    //printf("k = %d\n",k);

    mod = n%k;

    if(mod == 0)
    {
        limit = k;
    }

    else
    {
        limit = mod;
    }

    ans = fact(n, limit, k);
    printf("%d\n", ans);

    return 0;
}
