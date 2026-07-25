#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int a, b;
    cin >> a >> b;
    int xk, yk;
    cin >> xk >> yk;
    int xq, yq;
    cin >> xq >> yq;

    set<pair<int, int>> king, queen;

    king.insert({xk + a, yk + b});
    king.insert({xk + a, yk - b});
    king.insert({xk - a, yk + b});
    king.insert({xk - a, yk - b});
    king.insert({xk + b, yk + a});
    king.insert({xk + b, yk - a});
    king.insert({xk - b, yk + a});
    king.insert({xk - b, yk - a});

    queen.insert({xq + a, yq + b});
    queen.insert({xq + a, yq - b});
    queen.insert({xq - a, yq + b});
    queen.insert({xq - a, yq - b});
    queen.insert({xq + b, yq + a});
    queen.insert({xq + b, yq - a});
    queen.insert({xq - b, yq + a});
    queen.insert({xq - b, yq - a});

    int cnt = 0;
    for (auto p: king) {
        if (queen.count(p)) cnt++;
    }

    cout << cnt << endl;
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