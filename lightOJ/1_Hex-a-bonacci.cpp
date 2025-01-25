#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define MOD 10000007

int dp[100012];
int a, b, c, d, e, f;
ll fn(ll n) {
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;

    if (dp[n] != -1) return dp[n];

    ll res = ((fn(n-1) % MOD) + (fn(n-2) % MOD) + (fn(n-3) % MOD) + (fn(n-4) % MOD) + (fn(n-5) % MOD) + (fn(n-6) % MOD)) % MOD ;

    return dp[n] = res;
}
int main() {
    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        memset(dp, -1, sizeof(dp));
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", caseno, fn(n) % MOD);
    }
    return 0;
}