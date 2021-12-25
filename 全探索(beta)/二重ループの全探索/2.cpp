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
ll count_factor(ll num) {
    ll num_factor = 0;
    for (int i = 1; i <= num; i++) {
        if (num%i == 0) {
            num_factor++;
        }
    }
    return num_factor;
}


int main(void) {
    ll n, k;
    cin >> n >> k;

    ll count = 0;
    for (int i = 1; i <= n; i++) {
        if (count_factor(i) == k) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
