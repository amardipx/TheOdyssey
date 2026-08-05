#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n+1);
    long long s = 0;

    for (int i=1; i<=n; i++) {
        cin >> a[i];
        s += a[i];
    }

    vector<long long> ps(n+1);
    ps[1] = a[1];
    for (int i=2; i<=n; i++) {
        ps[i] = ps[i-1] + a[i];
    }

    for (int i=1; i<=q; i++) {
        int l, r, k;
        cin >> l >> r >> k;
        
        long long final = s - (ps[r] - ps[l-1]) + (long long)(r - l + 1) * k;
        if (final % 2 == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
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