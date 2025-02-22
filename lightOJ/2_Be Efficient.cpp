// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;
// constexpr char nl = '\n';
// #define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

// const int mx = 1e5+12;
// int a[mx];
// int pre_sum[mx];

// int main() {
//     fastio();
    
//     int t;
//     cin >> t;

//     for (int tc = 1; tc <= t; tc++) {
//         int n, m;
//         cin >> n >> m;

//         for (int i = 1; i <= n; i++) {
//             cin >> a[i];
//             pre_sum[i] = (pre_sum[i - 1]  + a[i]) % m;
//         }

//         map<int, int> cnt;
//         cnt[0] = 1;
//         ll ans = 0;

//         for (int i = 1; i <= n; i++) {
//             ans += cnt[pre_sum[i]];
//             cnt[pre_sum[i]]++;
//         }
//         cout << "Case " << tc << ": " << ans << nl;
//     }
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

const int mx = 1e5+12;
int a[mx];
ll sum[mx];

int main() {
    fastio();
    int t;
    cin >> t;

    for (int tc = 1; tc <= t; tc++) {
        int n, m;
        cin >> n >> m;
        
        map<int, int> cnt;
        cnt[0] = 1;
        ll ans = 0;
        ll MX = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            sum[i] = (sum[i-1] + a[i]) % m;
        }

        for (int i = 1; i <= n; i++) {
            cnt[sum[i]]++;
            MX = max(MX, cnt[i]);
        }

        for (int i = 0; i <= MX; i++) {
            ans += (cnt[i]*(cnt[i] - 1)) / 2;
        }
        cout << "Case " << tc << ": " << ans << nl;
    }
    
    
    return 0;
}