#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

const int mx = 1e5+12;
int a[mx];

int main() {
    fastio();
    
    int n, x;
    cin >> n >> x;

    for (int i = 0; i < n; i++) cin >> a[i];
    
    int lower_bound = n;
    int l = 0, r = n - 1;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (a[mid] >= x) {
            lower_bound = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    if (lower_bound == -1) lower_bound = n;
    cout << lower_bound << nl;
    return 0;
}