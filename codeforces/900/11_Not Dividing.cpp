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
    int a[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) a[i]++;
    }

    for (int i = 1; i < n; i++) {
        if (a[i] % a[i-1] == 0) a[i]++;
    }

    for (auto x : a) cout << x << " ";
    cout << nl;
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