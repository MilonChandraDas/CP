#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

const int mx = 1e5 + 123;
int a[mx];

int main() {
    fastio();
    
    int n, q;
    cin >> n >> q;

    for (int i = 0; i < n; i++) cin >> a[i]; 

    while (q--) {
        int x;
        cin >> x;
        int l = 0, r = n - 1; 

        int ans = -1;
        while (l <= r) {
            int mid = (l + r) / 2;

            if (a[mid] == x) {
                ans = mid;
                break; 
            }
            else if (a[mid] >= x) r = mid - 1;
            else l = mid + 1; 
        }

        cout << ans << nl;
    }
    
    return 0;
}