#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;
constexpr int INF = 1e9;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define fraction() cout << fixed << setprecision(10)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

int main() {
    fastio();
    int n, q;
    cin >> n >> q;
    int arr[n+1] = {0};

    while (q--) {
        int l, r, x;
        cin >> l >> r >> x;
        arr[l] += x;
        arr[r+1] -= x;
    }

    for (int i = 1; i <= n; i++) {
        arr[i] += arr[i-1];
        cout << arr[i] << " ";
    }
    
    return 0;
}