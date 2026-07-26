#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i=1; i<=n; i++) cin >> a[i];

    if (n % 2 == 1) {
        cout << "NO" << endl;
        return;
    }

    int mnOdd = INT_MAX;
    int mxEv = INT_MIN;

    for (int i=1; i<=n; i++) {
        if (i % 2) mnOdd = min(mnOdd, a[i]);
        else mxEv = max(mxEv, a[i]);
    }

    if (mnOdd - mxEv >= 2) cout << "YES" << endl;
    else cout << "NO" << endl;
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