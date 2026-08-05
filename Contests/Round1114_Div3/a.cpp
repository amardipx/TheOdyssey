#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int rounds = 0;

    while (true) {
        if ((a == b) || (b == c) || (a == c)) {
            cout << rounds << endl;
            return;
        } else {
            int maxi = max({a, b, c});
            if (maxi == a) a--;
            else if (maxi == b) b--;
            else c--;

            int mini = min({a, b, c});
            if (mini == a) a++;
            else if (mini == b) b++;
            else c++;

            rounds++;
        }
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