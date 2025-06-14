#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define fraction() cout << fixed << setprecision(10)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

void solve() {
    int n;
    cin >> n;
    int cnt = 0, res = 0;

    while (n != 1) {
        if (n % 6 == 0) {
            res = 0;
            cnt++;
            n /= 6;
        }
        else {
            if (res == 1) break;
            else {
                res = 1;
                cnt++;
                n *= 2;
            }
        }
    }
    
    if (res) cout << -1 << nl;
    else cout << cnt << nl;
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}