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
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    if (v.size() == 1) cout << 0 << nl;
    else {
        int maxi = -1e5;
        int cnt = 0;
        for (int i = 1; i < n; i++) {
            if (v[i] - v[i-1] <= k) {
                cnt++;
                maxi = max(maxi, cnt);
            } else{
                cnt = 0;
            }
        }
        cout << n-maxi-1 << nl;
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