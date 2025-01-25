#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
constexpr char nl = '\n';
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        vector<int> a, b;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];

            if (arr[i] % 2 != 0) a.push_back(arr[i]);
            else b.push_back(arr[i]);
        }

        if (a.size() == 0 || b.size() == 0) {
            cout << -1 << nl;
        }
        else {
            cout << a.size() << ' ' << b.size() << nl;

            for (auto x : a) cout << x << ' ';
            cout << nl;
            for (auto x : b) cout << x << ' ';
            cout << nl;
        }
    }

    return 0;
}