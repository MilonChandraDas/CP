#include <bits/stdc++.h>
using namespace std;

using ll = long long;

constexpr char nl = '\n';
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int cnt = 1, mx = 1;
    for (int i = 1; i < n; i++) {
        if (abs(v[i] - v[i - 1]) <= k) {
            cnt++;
        } else {
            mx = max(mx, cnt);
            cnt = 1;
        }
    }
    mx = max(mx, cnt);

    cout << n - mx << nl;
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
