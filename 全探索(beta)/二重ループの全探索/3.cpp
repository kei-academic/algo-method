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
bool is_palindrome(ll num) {
    bool flag = true;
    string s = to_string(num);
    rep(i, s.size()) {
        if (s.at(i) != s.at(s.size()-i-1)) {
            flag = not flag;
            break;
        }
    }
    return flag;
}


int main(void) {
    ll l, r;
    cin >> l >> r;

    ll count = 0;
    for (int i = l; i <= r; i++) {
        if (is_palindrome(i)) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
