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

    vl count(9, 0);
    rep(i, n) {
        count.at(arr.at(i)-1)++;
    }

    ll index = 0;
    rep(i, 9) {
        if (count.at(i) > count.at(index)) {
            index = i;
        }
    }

    cout << index + 1 << endl;

    return 0;
}
