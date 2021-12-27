#include <bits/stdc++.h>
using namespace std;

/* accelration */
#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
struct Fast {Fast() {std::cin.tie(0); ios::sync_with_stdio(false);}} fast;

/* alias */
using ull  = unsigned long long;
using ll   = long long;
using vi   = vector<int>;
using vl   = vector<long>;
using vll  = vector<long long>;
using vvi  = vector<vi>;
using vvl  = vector<vl>;
using vvll = vector<vll>;
using vs   = vector<string>;
using pll  = pair<ll, ll>;

/* define short */
#define pb          push_back
#define mp          make_pair
#define fi          first
#define se          second
#define all(x)      (x).begin(), (x).end()
#define YESNO(bool) cout << (bool ? "YES" : "NO") << endl;
#define YesNo(bool) cout << (bool ? "Yes" : "No") << endl;
#define yesno(bool) cout << (bool ? "yes" : "no") << endl;

/* REP macro */
#define reps(i, a, n) for (ll i = a; i < (ll)(n); i++)
#define rep(i, n)     reps(i, 0, n)
#define rrep(i, n)    reps(i, 1, n + 1)
#define repd(i, n)    for (ll i = n-1; i >= 0; i--)
#define rrepd(i, n)   for (ll i = n; i >= 1; i--)

/* const */
const double PI = 3.1415926535897932384626;
//-----------------------------------------------------------------
int main(void) {
    cout << 1300 % 120 << endl;

    return 0;
}
