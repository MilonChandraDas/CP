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
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    int ans = INT_MIN;
    if (n==1) {
        cout << 0 <<nl;
        return;
    }

    for (int i = 1; i < n; i++) ans = max(ans, v[i] - v[0]);

    for (int i = 0; i < n-1; i++) ans = max(ans, v[n-1] - v[i]);

    for (int i = 1; i < n; i++) ans = max(ans, v[i-1] - v[i]);
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