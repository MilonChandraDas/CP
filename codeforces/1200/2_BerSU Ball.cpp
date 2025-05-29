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


int main() {
    fastio();
    int n, m;
    cin >> n;

    vector<int> b(n+1);
    for (int i = 1; i <= n; i++) cin >> b[i];

    cin >> m;
    vector<int> g(m+1);
    for (int i = 1; i <= m; i++) cin >> g[i];

    sort(b.begin(), b.end());
    sort(g.begin(), g.end());
    
    int x = 1, cnt = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = x; j <= m; j++) {
            if (abs(b[i] - g[j]) <= 1) {
                cnt++;
                x = j + 1;
                break;
            }
        }
    }
    cout << cnt << nl;
    return 0;
}