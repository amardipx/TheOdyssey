#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i=0; i<n-2; i++) {
        if ((s[i] == '.') && (s[i+1] == '.') && (s[i+2] == '.')) {
            cout << 2 << endl;
            return;
        }
    }

    int dots = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == '.') dots++;
    }

    cout << dots << endl;
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