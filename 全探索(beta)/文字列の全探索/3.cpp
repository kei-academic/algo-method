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
string s;

int main(void) {
    cin >> s;
    ll count = 0;
    rep(i, s.size()-1) {
        if (s.at(i) == s.at(i+1)) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
