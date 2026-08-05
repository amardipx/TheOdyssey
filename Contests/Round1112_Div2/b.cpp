#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;
    int cnt0 = k/2 + 1;
    int cnt1 = (k+1)/2 + 1;

    if (cnt0 + cnt1 > n) {
        cout << -1 << endl;
        return;
    }

    for (int i=0; i<cnt0; i++) cout << 0;
    for (int i=0; i<cnt1; i++) cout << 1;

    bool flag = 0;
    for (int i=cnt0+cnt1+1; i<=n; i++) {
        cout << flag;
        flag = !flag;
    }

    cout << endl;
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