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
    ll n, q;
    cin >> n >> q;
    ll a[n+1], pref[n+1];
    pref[0] = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pref[i] = a[i] + pref[i-1];
    }
    ll total_pref = pref[n];

    while (q--) {
        ll l, r, k;
        cin >> l >> r >> k;

        ll out_pref = pref[r] - pref[l-1];
        ll in_pref = ((r-l)+1)*k;

        ll calculate_pref = total_pref - out_pref + in_pref;

        if (calculate_pref % 2 == 1) yes;
        else no;
    }
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