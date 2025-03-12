#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr double eps = 1e-9;

#define fraction() cout << fixed << setprecision(10)
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    int n;
    cin >> n;
    vector<int> v(n), a;

    for (int i = 0; i < n; i++) cin >> v[i];

    a.push_back(v[0]);

    int size = v.size();
    for (int i = 1; i < n; i++) {
        if (v[i] < v[i-1]) {
            a.push_back(1);
            a.push_back(v[i]);
        }
        else a.push_back(v[i]);
    }

    int a_size = a.size();
    cout << a_size << nl;

    for (auto x : a) cout << x << " ";
    cout << '\n';
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