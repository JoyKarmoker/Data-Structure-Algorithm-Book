//#pragma GCC optimize("Ofast,no-stack-protector")
//#pragma GCC target("avx")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define re return
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define sqrt(x) sqrt(abs(x))
#define mp make_pair
#define pi (3.14159265358979323846264338327950288419716939937510)
#define fo(i, n) for(int i = 0; i < n; ++i)
#define ro(i, n) for(int i = n - 1; i >= 0; --i)
#define unique(v) v.resize(unique(all(v)) - v.begin())

template <class T> T abs (T x) { re x > 0 ? x : -x; }
template <class T> T sqr (T x) { re x * x; }
template <class T> T gcd (T a, T b) { re a ? gcd (b % a, a) : b; }
template <class T> int sgn (T x) { re x > 0 ? 1 : (x < 0 ? -1 : 0); }


typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<string> vs;
typedef double D;
typedef long double ld;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef unsigned long long ull;
typedef tree <int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> _tree;

void get (int x, vi &v) {
    for (int i = 9; i >= 2; --i) {
        if (x % i == 0) {
            v.pb(i);
            x /= i;
            if (x > 1) get (x, v);
            re;
        }
    }
    cout << -1;
    exit(0);
}

int main() {
    int x;
    cin >> x;
    if (x <= 1) {
        if (x) cout << 1 << '\n';
        else cout << 10 << '\n';
        re 0;
    }
    vi v;
    get (x, v);
    sort (all(v));
    for (int j : v) cout << j;
}
