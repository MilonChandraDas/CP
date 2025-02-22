#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

const int mx = 1e9+12;
int a[mx];

int main() {
    fastio();
    int n;
    cin >> n;

    // Use a vector instead of a large static array
    vector<int> a(n + 1, 0); // Initialize with size n+1 and default value 0

    for (int i = 1; i <= n; i++) {
        a[i] = i;
    }

    int ans = 0;
    for (int i = 0; i <= n; i++) {
        ans += (a[i] | n); // Perform bitwise OR operation
    }

    cout << ans << nl;
}