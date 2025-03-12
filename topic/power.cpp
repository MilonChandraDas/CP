#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr double eps = 1e-9;

#define fraction() cout << fixed << setprecision(10)
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)

ll power(ll a, ll b) {
    if (b == 0) return 1;

    if (b%2 == 0) {
        ll x = power(a, b/2);
        return x*x;
    }
    else {
        return power(a, b-1) * a;
    }
}

int main() {
    fastio();
    int a;
    cin >> a;

    cout << power(a, 3);
    
    return 0;
}