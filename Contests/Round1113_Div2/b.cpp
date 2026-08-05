#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    if (n < 2 * m) {
        cout << "NO" << endl;
        return;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i=0; i<m; i++) {
        int small = a[i];

        if (small >= b[i]) {
            cout << "NO" << endl;
            return;
        }
    }

    for (int i=0; i<m; i++) {
        if (b[i] >= a[n-m+i]) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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