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
    vector<int> v(n+1);

    for (int i = 1; i <= n; i++) cin >> v[i];
    sort(v.begin()+1, v.end(), greater<int>());

    if (v[1] == v[n]) no;
    else {
        yes;
        cout << v[n] << " ";
        for (int i = 1; i < n; i++) cout << v[i] << " ";
        cout << nl;
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