#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';
#define MOD 10000000007
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

int dp[10000005];
int fact(int n) {
    if (n == 1) return 0;
    if (dp[n] != 0) return dp[n];

    int res = n * fact(n - 1);
    return dp[n] = res;
}

int main() {
    fastio();
    int n;
    cin >> n;

    int ans = fact(n);
    cout << ans << nl;
    
    
    return 0;
}