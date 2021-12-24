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
    vl arr(n);
    rep(i, n) {
        cin >> arr.at(i);
    }

    ll min_num = 100;
    rep(i, n) {
        if (arr.at(i) < min_num) {
            min_num = arr.at(i);
        }
    }

    cout << min_num << endl;

    return 0;
}
