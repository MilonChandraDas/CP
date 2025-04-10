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

    bool done = false;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if(__gcd(v[i], v[j]) <= 2) {
                done = true;
                break;
            }
        }
    }

    if (done) yes;
    else no;
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