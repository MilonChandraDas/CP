#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);


int main() {
    fastio();
    
    int m, n;
    cin >> m >> n;
    vector<int> a(m), b(n);
    
    for (int i = 0; i < m; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        int up = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        cout << up << " ";

    }
    
    return 0;
}