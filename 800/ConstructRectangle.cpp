#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    if ((a == b + c) || (b == a + c) || (c == a + b)) {
        cout << "YES" << endl;
        return;
    }

    else if ((a == b) && (c % 2 == 0)) {
        cout << "YES" << endl;
        return;
    }

    else if ((a == c) && (b % 2 == 0)) {
        cout << "YES" << endl;
        return;
    }

    else if ((b == c) && (a % 2 == 0)) {
        cout << "YES" << endl;
        return;
    }

    else {
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