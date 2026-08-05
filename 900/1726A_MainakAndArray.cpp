#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (n == 1) {
        cout << 0 << endl;
        return;
    }

    int ans = INT_MIN;

    for (int i = 1; i < n; i++)
        ans = max(ans, a[i] - a[0]);

    for (int i = 0; i < n - 1; i++)
        ans = max(ans, a[n - 1] - a[i]);

    for (int i = 0; i < n - 1; i++)
        ans = max(ans, a[i] - a[i + 1]);

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}