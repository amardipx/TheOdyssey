#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    long long maxi, start;
    int n;
    cin >> maxi >> start >> n;
    
    long long ans = start;
    for (int i=0; i<n; i++) {
        long long tool;
        cin >> tool;
        ans += min(tool, maxi-1);
    }

    cout << ans << endl;
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