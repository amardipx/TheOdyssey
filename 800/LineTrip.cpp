#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);

    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    int ans = (x - a[n-1]) * 2;
    for (int i=0; i<n; i++) {
        if (i == 0) ans = max(ans, a[i]);
        else ans = max(ans, a[i] - a[i-1]);
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}