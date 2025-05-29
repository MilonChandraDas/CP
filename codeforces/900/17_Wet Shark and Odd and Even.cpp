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
    ll sum = 0;
    int minimum = INT_MAX;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
        if (x % 2 == 1) minimum = min(minimum, x);
    }
    
    if (sum%2 == 0) cout << sum << nl;
    else cout << sum - minimum << nl;
    return 0;
}