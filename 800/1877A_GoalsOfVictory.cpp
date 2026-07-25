#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n-1);
    for (int i=0; i<n-1; i++) {
        cin >> a[i];
    }

    int s = 0;
    for (int i=0; i<n-1; i++) {
        s += a[i];
    }

    int ans = 0 - s;
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