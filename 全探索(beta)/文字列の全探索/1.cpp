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
char c;

int main(void) {
    cin >> s >> c;

    bool flag = false;
    for (auto x : s) {
        if (x == c) {
            flag = not flag;
            break;
        }
    }

    cout << (flag ? "Yes" : "No") << endl;

    return 0;
}
