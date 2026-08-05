#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a;
    cin >> b;

    int cnt1 = 0;
    int cnt2 = 0;
    int even1 = 0;
    int even2 = 0;

    for (int i=0; i<n; i++) {
        if (a[i] == '1') {
            cnt1 ++;
            if (i % 2 == 1) even1++;
        }
        if (b[i] == '1') {
            cnt2++;
            if (i % 2 == 1) even2++;
        }
    }

    if ((cnt1 != cnt2) || (even1 != even2)) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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