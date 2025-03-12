#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr double eps = 1e-9;

#define fraction() cout << fixed << setprecision(10)
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b) {
        if (c % 2 == 0) cout << "Second\n";
        else cout << "First\n";
    }
    else if (a > b) cout << "First\n";
    else cout << "Second\n";
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