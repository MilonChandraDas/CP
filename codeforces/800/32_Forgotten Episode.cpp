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
    ll n;
    cin >> n;
    
    ll total = n * (n+1)/2;

    int x;
    for (int i = 0; i < n-1; i++) {
        cin >> x;
        total -= x;
    }
    cout << total << nl;
}