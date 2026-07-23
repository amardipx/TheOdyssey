#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    string s;
    cin >> s;

    int n = s.size();
    if (n == 1) {
        cout << "YES" << endl;
        return;
    }

    int cnt = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == 'N') cnt ++;
    }

    if (cnt != 1) {
        cout << "YES" << endl;
        return;
    } else {
        cout << "NO" << endl;
        return;
    }
    return;
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