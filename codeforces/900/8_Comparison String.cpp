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
    int n; string s;
    cin >> n >> s;

    int ans = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt++;
        if (s[i+1] != s[i]) {
            ans = max(ans,cnt);
            cnt = 0;
        }
    }
    cout << ans+1 << nl;
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