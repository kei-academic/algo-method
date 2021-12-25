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
int main(void) {
    string s;
    cin >> s;

    vl arr(26, 0);
    ll count = 0;
    for (auto c : s) {
        if (arr.at(c - 'a') == 0) {
            arr.at(c - 'a')++;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
