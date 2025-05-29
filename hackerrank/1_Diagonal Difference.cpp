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
    int n;
    cin >> n;
    int a[n+1][n+1];
    
    for (int i =1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    int prime = 0, second = 0;
    for (int i = 1; i <= n; i++) prime += a[i][i];
    for (int i = 1; i <= n; i++) second += a[i][n-i+1];

    cout << abs(prime - second);
    return 0;
}