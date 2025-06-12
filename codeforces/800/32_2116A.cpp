#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define fraction() cout << fixed << setprecision(10)
#define f cout << "Flower" << nl
#define g cout << "Gellyfish" << nl

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int gmin = min(a,c);
    int fmin = min(b,d);

    if (gmin < fmin) f;
    else g;
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