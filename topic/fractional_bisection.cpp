#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr double eps = 1e-10;

#define fraction() cout << fixed << setprecision(10)
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)

int main() {
    fastio();
    fraction();
    dl n;
    cin >> n;

    dl l = 0, r = n;

    while((r - l) > eps) {
        dl mid = (r + l) / 2;

        if ((mid * mid) < n) l = mid;
        else r = mid;
    }
    cout << l << nl;
    cout << sqrt(n);
    return 0;
}