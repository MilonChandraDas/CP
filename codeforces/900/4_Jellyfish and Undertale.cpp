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
    ll a, b, n;
    cin >> a >> b >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    ll sum = b-1;

    for (int i = 0; i < n; i++) {
        ll val = 1+v[i];
        ll next = min(val, a);
        sum += (next-1);
    }

    cout << sum+1 << nl;
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