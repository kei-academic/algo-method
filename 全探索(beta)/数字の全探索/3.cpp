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
ll n;

int main(void) {
    cin >> n;

    if (n == 1) {
        cout << "No" << endl;
        return 0;
    }

    bool is_prime = true;
    for (int i = 2; i < n; i++) {
        if (n%i == 0) {
            is_prime = not is_prime;
            break;
        }
    }

    cout << (is_prime ? "Yes" : "No") << endl;

    return 0;
}
