#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    string s, t;
    cin >> s >> t;
    int ss = s.size();
    int st = t.size();
    set<int> index;
    set<char> seen;

    int i = st-1;
    int j = ss-1;

    while (i >= 0) {
        if (j < 0) {
            cout << "NO" << endl;
            return;
        }
        
        char curr = t[i];
        if (s[j] == curr) {
            index.insert(j);
            j--;
            i--;
        } else {
            j--;
        }
    }

    for (int i=0; i<ss; i++) {
        if (index.find(i) != index.end()) {
            seen.insert(s[i]);
        } else {
            if (seen.find(s[i]) != seen.end()) {
                cout << "NO" << endl;
                return;
            }
        }
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