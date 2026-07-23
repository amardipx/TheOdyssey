#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    if (k > (n + 1) / 2) {
        cout << -1 << endl;
        return;
    }

    vector<string> board(n, string(n, '.'));
    int placed = 0;

    for (int i = 0; i < n && placed < k; i += 2) {
        board[i][i] = 'R';
        placed += 1;
    }

    for (string row: board) {
        cout << row << endl;
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