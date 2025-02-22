// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;
// constexpr char nl = '\n';
// #define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

// // A Xo2 + B Xo + C >= K .
// ll a, b, c, k;
// ll res(ll x) {
//     return ((a * x * x) + (b * x) + c);
// }

// int main() {
//     fastio();
    
//     int t;
//     cin >> t;

//     while (t--) {
        
//         cin >> a >> b >> c >> k;

//         ll l = 0, r = 1e10;
//         ll ans = -1;

//         while (l <= r) {
//             ll mid = (l + r) / 2;
            
//             if (res(mid) >= k) {
//                 ans = mid;
//                 r = mid - 1;
//             }
//             else {
//                 l = mid + 1;
//             }
//         }
//         cout << ans << nl;
//     }
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

ll res(ll n) {
    return (n * (n + 1)) / 2;
}

int main() {
    fastio();
    
    int t;
    cin >> t;

    while (t--) {
        ll y;
        cin >> y;

        ll l = 1, r = 1e5, ans = -1;

        while (l <= r) {
            ll mid = (l + r) / 2;

            if (res(mid) == y) {
                ans = mid;
                break;
            }
            else if (res(mid) > y) r = mid - 1;
            else l = mid + 1;
        }
        if (ans == -1) cout << "NAI" << nl;
        else cout << ans << nl;
    }
    
    return 0;
}