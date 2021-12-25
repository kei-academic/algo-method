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
string s, t;

int main(void) {
    cin >> s >> t;

    bool flag = false;
    rep(i, s.size()-t.size()+1) {
        if (s.substr(i, t.size()) == t) {
            flag = not flag;
        }
    }

    cout << (flag ? "Yes" : "No") << endl;

    return 0;
}
