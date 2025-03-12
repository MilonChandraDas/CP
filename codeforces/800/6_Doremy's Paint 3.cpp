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
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        mp[a]++;
    }
    bool done = false;
    if (mp.size() == 1) done = true;
    else if (mp.size() == 2) {
        auto ff = mp.begin();
        auto ss = mp.begin();
        ss++;
        if (ff->second == ss->second) done = true;
        else if (abs(ff->second - ss->second) == 1) done = true;
    }
    
    if (done) cout << "YES" << nl;
    else cout << "NO" << nl;
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