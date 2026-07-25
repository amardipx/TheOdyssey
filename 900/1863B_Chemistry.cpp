#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_map<char, int> counter;

    for (int i=0; i<n; i++) {
        counter[s[i]]++;
    }

    int odds = 0;
    for (const auto& [key, val] : counter) {
        if (val % 2 == 1) odds++;
    }

    if (odds - k <= 1) cout << "YES" << endl;
    else cout << "NO" << endl;
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