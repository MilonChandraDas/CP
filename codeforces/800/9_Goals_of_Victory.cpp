#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n - 1];

        ll sum = 0;
        for (int i = 0; i < (n-1); i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum <= 0)
            cout << abs(sum) << nl;
        else
            cout << '-' << sum << nl;
    }

    return 0;
}