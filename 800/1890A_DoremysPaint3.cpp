#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    unordered_map<int, int> mpp;
    for (int i=0; i<n; i++) {
        mpp[a[i]]++;
    }

    if (mpp.size() == 1) {
        cout << "Yes" << endl;
        return;
    } else if (mpp.size() != 2) {
        cout << "No" << endl;
        return;
    }

    for (const auto& [key, val] : mpp) {
        if (val == n/2) {
            cout << "Yes" << endl;
            return;
        }
    }

    cout << "No" << endl;
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