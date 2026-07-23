#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, m;
    int x, y;
    int a, b;
    int dr = 1, dc = 1;

    cin >> n >> m >> x >> y >> a >> b;

    int seconds = 0;
    
    while (true) {
        if (x == a || y == b) {
            cout << seconds << endl;
            return;
        }

        if (x + dr > n) dr *= -1;
        if (y + dc > m) dc *= -1;
        x += dr;
        y += dc;
        seconds ++;
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