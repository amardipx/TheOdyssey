#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    long long n;
    cin >> n;
    if (n < 4 || n % 2) {
        cout << -1 << endl;
        return;
    }

    long long mn = n / 6;
    if (n % 6) mn++;

    long long mx = n / 4;

    cout << mn << " " << mx << endl;
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