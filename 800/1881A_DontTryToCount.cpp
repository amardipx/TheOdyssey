#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int lenx, lens;
    cin >> lenx >> lens;
    string x, s;
    cin >> x;
    cin >> s;

    int cnt = 0;
    while (x.size() < s.size()) {
        x = x + x;
        cnt ++;
    }

    if (x.find(s) != string::npos) {
        cout << cnt << endl;
        return;
    }

    x += x;
    cnt ++;

    if (x.find(s) != string::npos) {
        cout << cnt << endl;
        return;
    } else {
        cout << -1 << endl;
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