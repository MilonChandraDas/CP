#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr double eps = 1e-9;

#define fraction() cout << fixed << setprecision(10)
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];
    bool done = 0;

    for (auto x : v) {
        if (x == k) done = 1;
    }
    
    if (done) cout << "YES" << nl;
    else cout << "NO" << nl;
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