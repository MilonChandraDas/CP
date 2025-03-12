#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr double eps = 1e-9;

#define fraction() cout << fixed << setprecision(10)
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    int n;
    cin >> n;
    vector<int> v(n-1);

    for (int i = 0; i < n-1; i++) cin >> v[i];

    ll sum = 0;
    for (auto x : v) sum += x;

    if (sum < 0) cout << abs(sum) << nl;
    else cout << -1 * sum << nl;
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