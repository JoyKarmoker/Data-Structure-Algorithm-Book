#include <iostream>
#include <cmath>
#include <map>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    const double PI = acos(-1.);
    int n;
    double r;
    cin >> n >> r;

    double x1, y1;
    cin >> x1 >> y1;

    if(n == 1)
    {
        cout << fixed << setprecision(2) << r << endl;
        return 0;
    }

    double vaultx, vaulty;
    vaultx = x1;
    vaulty = y1;

    double x2, y2;
    double d;
    double p = 0.0;
    for(int i = 0; i < n - 1; i++)
    {
        cin >> x2 >> y2;

        d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        p += d;

        x1 = x2;
        y1 = y2;
    }

    p += sqrt(pow(x1 - vaultx, 2) + pow(y1 - vaulty, 2));

    p += 2 * PI * r;

    cout << fixed << setprecision(2) << p << endl;

    return 0;
}
