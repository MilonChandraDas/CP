#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

vector<ll> v;
ll n;
bool solve(ll val) {
    for (int i = 1; i<=n; i++) {
        val += v[i];
        if (val <= 0) return false;
    }
    return true;
}

int main() {
    fastio();
    
    ll t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> n;
        v.resize(n+1);

        for (int i = 1; i <= n; i++) cin >> v[i];

        ll l = 1, r = 1e18, ans;
        while (l <= r) {
            ll mid = (l + r) / 2;

            if (solve(mid)) {
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        cout << "Scenario #" << i << ": " << ans << nl;
    }
    
    return 0;
}