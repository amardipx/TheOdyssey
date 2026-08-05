#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    int nonZero = 0;
    bool inside = false;

    for (int i=0; i<n; i++) {
        if ((a[i] != 0) && (inside == false)) {
            nonZero++;
            inside = true;
        } else if (a[i] == 0) inside = false;
    }

    if (nonZero == 0) cout << 0 << endl;
    else if (nonZero == 1) cout << 1 << endl;
    else cout << 2 << endl;
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