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
string s, t;

int main(void) {
    cin >> n >> s >> t;
    ll count = 0;
    rep(i, n) {
        if (s.at(i) != t.at(i)) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
