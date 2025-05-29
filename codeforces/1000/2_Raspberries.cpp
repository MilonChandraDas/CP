#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;
constexpr int INF = 1e9;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define fraction() cout << fixed << setprecision(10)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    int even = 0, ans = k;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i]%2 == 0) even++;
        if (v[i]%k == 0) ans = 0;
        ans = min(ans, k-(v[i] % k));
    }

    if (k == 4) {
        if (even >= 2) ans = 0;
        else if (even == 1) ans = min(ans, 1);
        else ans = min(ans, 2);
    }

    cout << ans << nl;
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