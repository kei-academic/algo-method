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
bool check_prime(ll num) {
    bool is_prime = true;
    for (int i = 2; i < num; i++) {
        if (num%i == 0) {
            is_prime = not is_prime;
            break;
        }
    }
    return is_prime;
}


int main(void) {
    ll n;
    cin >> n;
    vl arr(n);
    rep(i, n) {
        cin >> arr.at(i);
    }

    ll count = 0;
    rep(i, n) {
        if (arr.at(i) == 1) {
            continue;
        } else if (check_prime(arr.at(i))) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
