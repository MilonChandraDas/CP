#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr double eps = 1e-9;

#define fraction() cout << fixed << setprecision(10)
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)

ll fact(ll n) {
    if (n == 1) return 1;
    return n * fact(n - 1);
}

int main() {
    fastio();
    
    cout << fact(25);
    return 0;
}