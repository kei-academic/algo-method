#include <bits/stdc++.h>
using namespace std;

/* accelration */
#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

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
#define pb           emplace_back
#define mp           make_pair
#define fi           first
#define se           second
#define endl         '\n'
#define all(x)       x.begin(), x.end()
#define rall(x)      x.rbegin(), x.rend()
#define max_(x)      *max_element(all(x))
#define min_(x)      *min_element(all(x))
#define sum_(x)      accumlate(all(x), (ll)0)
#define size_(x)     (x).size()
#define count_(x, y) count(all(x), y)
#define sort_(x)     sort(all(x))
#define rsort_(x)    sort(rall(x))
#define reverse_(x)  reverse(all(x))
#define each(x, y)   for (auto x : y)
#define elif         else if
#define print(x)     cout << x << endl;
#define YESNO(flag)  cout << (flag ? "YES" : "NO") << endl;
#define YesNo(flag)  cout << (flag ? "Yes" : "No") << endl;
#define yesno(flag)  cout << (flag ? "yes" : "no") << endl;
#define floatset()   cout << fixed << setprecision(15);

/* REP macro */
#define reps(i, a, n) for (ll i = a; i < (ll)(n); i++)
#define rep(i, n)     reps(i, 0, n)
#define rrep(i, n)    reps(i, 1, n+1)
#define repd(i, n)    for (ll i = n-1; i >= 0; i--)
#define rrepd(i, n)   for (ll i = n; i >= 1; i--)

/* constexpr */
constexpr ll MOD     = 1000000007;
constexpr ll mod     = 998244353;
constexpr double INF = 2e18;
constexpr double PI  = 3.1415926535897932384626;
template<typename T>
constexpr double DigToRad(T x) {return x * PI / 180;}

/* func */
template <typename T>
inline bool chmax(T &a, const T& b) {return (a < b) ? (a = b, 1) : 0;}
template <typename T>
inline bool chmin(T &a, const T& b) {return (a > b) ? (a = b, 1) : 0;}
template <typename T>
inline ll gcd_(T &a, const T& b) {return (a%b == 0) ? b : gcd(b, a%b);}
template <typename T>
inline ll lcm_(T &a, const T& b) {return a / gcd(a, b) * b;}
//-----------------------------------------------------------------
void solve() {
    print(bitset<5>(0b10010 | 0b11111));
}


int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
