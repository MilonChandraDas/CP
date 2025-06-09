#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio();
    
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int a[n];
        
        for (int i = 0; i < n; i++) cin >> a[i];

        if (is_sorted(a, a+n) || k >= 2) {
            cout << "YES" << nl;
        }
        else cout << "NO" << nl;
    }
    
    return 0;
}