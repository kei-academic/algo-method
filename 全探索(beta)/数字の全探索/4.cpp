#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second
using vl = vector<long>;
using vvl = vector<vl>;
typedef long long ll;
const double PI = 3.1415926535897932384626;
//-----------------------------------------------------------------
ll a, b;

int main(void) {
    cin >> a >> b;

    ll gcd = 0;
    for (int i = 1; i <= min(a, b); i++) {
        if ((a%i == 0) && (b%i == 0)) {
            gcd = i;
        }
    }

    cout << gcd << endl;

    return 0;

    // with gcd
    // cout << gcd(a, b) << endl;
}
