#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int maxLen = 1;
    int currLen = 1;

    for (int i=1; i<n; i++) {
        if (s[i] == s[i-1]) currLen++;
        else currLen = 1;
        maxLen = max(maxLen, currLen);
    }

    cout << maxLen + 1 << endl;
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