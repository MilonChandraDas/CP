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
    sort(v.begin(), v.end());

    int left = 0, right = n-1;
    
    if ((v[0] + v[n-1]) % 2 == 0) {
        cout << 0 << nl;
        return;
    }

    while ((v[left] + v[n-1]) % 2 != 0) {
        left++;
    }

    while ((v[0] + v[right]) % 2 != 0) {
        right--;
    }

    int ans = min(left, n - right - 1);

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