#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define fraction() cout << fixed << setprecision(10)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> v(n);
    int l = 1, r = n;

    for (int i = n-1; i >= 1; i--) {
        if (s[i-1] == '<') {
            v[i] = l++;
        }
        else {
            v[i] = r--;
        }
    }
    v[0] = r;
    
    for (auto x : v) cout << x << ' ';
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