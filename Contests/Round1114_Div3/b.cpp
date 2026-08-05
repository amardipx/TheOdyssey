#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int init = 1;
    for (int i=1; i<n; i++) {
        if (s[i] != s[i-1]) init++;
    }

    bool minus2 = false;
    bool minus1 = false;

    for (int i=1; i<=n-2; i++) {
        if ((s[i] != s[i-1]) && (s[i] != s[i+1])) {
            if (s[i-1] == s[i+1]) minus2 = true;
            else minus1 = true;
        }
    }

    if (minus2) init -= 2;
    else if (minus1) init -= 1;

    cout << init << endl;
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