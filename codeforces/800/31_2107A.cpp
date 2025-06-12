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
    vector<int> v(n);
    set<int> s;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        s.insert(v[i]);
    }
    auto mx = *max_element(v.begin(), v.end());
    if (s.size() == 1) {
        no;
        return;
    }
    
    yes;
    for (int i = 0; i < n; i++) {
        if (v[i] == mx) {
            cout << 1 << " ";
        }
        else {
            cout << 2 << " ";
        }
    }
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