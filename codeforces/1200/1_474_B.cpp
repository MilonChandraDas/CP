#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

const int mx = 1e5+123;
int a[mx];

int main() {
    fastio();
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<pair<int, int>> v;
    v.push_back({1, a[0]});

    for (int i = 1; i < n; i++) {
       int start = v[i - 1].second + 1;
       int end = v[i - 1].second + a[i];
       v.push_back({start, end});
    }

    int q;
    cin >> q;

    while (q--) {
        int x;
        cin >> x;

        int l = 0, r = v.size() -1;
        int ans;
        while (l <= r) {
            int mid = (l + r) / 2;

            if (v[mid].first <= x && v[mid].second >= x ) {
                ans = mid;
                break;
            }
            else if (v[mid].first > x) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        cout << ans + 1 << nl;
    }
    
    return 0;
}