#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr double eps = 1e-9;

#define fraction() cout << fixed << setprecision(10)
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)


void solve() {
    int n, m;
    cin.ignore() >> n >> m;
    string x, s;
    cin >> x >> s;

    bool done = 0;
    for (int i = 0; i < 10; i++) {
        if (x.find(s) != -1) {
            cout << i << nl;
            done = 1;
            break;
        }
        else {
            x += x;
        }
    }

    if (!done) cout << "-1" << nl;
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