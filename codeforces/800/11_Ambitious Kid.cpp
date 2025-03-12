#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int ans = 1e5;
    while (n--) {
        int a;
        cin >> a;
        ans = min(ans, abs(a));
    }
    cout << ans << '\n';
}