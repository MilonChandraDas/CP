#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

vector<ll> a;
int n;

bool solve(ll val) {
    for (int i = 1; i <= n; i++) {
        val += a[i];
        if (val <= 0) return false;
    }
    return true;
}

int main() {
    fastio();
    
    int t;
    cin >> t;

    while (t--) {
        
        cin >> n;
        a.resize(n+1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        ll l = 0, r = 1e18;
        ll ans = r;

        while (l <= r) {
            ll mid = (l + r) / 2;

            if (solve(mid)) {
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }

        cout << ans << nl;
    }

    
    return 0;
}