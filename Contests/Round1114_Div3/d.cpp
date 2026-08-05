#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<long long> b(n);
    map<long long, long long> freq;

    for (int i = 0; i < n; i++) {
        cin >> b[i];
        freq[b[i]]++;
    }

    if (freq.begin()->first != 0) {
        cout << -1 << '\n';
        return;
    }

    vector<pair<long long, long long>> groups(freq.begin(), freq.end());
    int m = groups.size();

    unordered_map<long long, long long> value;

    long long prev = 0;

    for (int i = 0; i < m - 1; i++) {
        long long shadow = groups[i].first;
        long long nextShadow = groups[i + 1].first;
        long long cnt = groups[i].second;

        long long diff = nextShadow - shadow;

        if (diff % cnt != 0) {
            cout << -1 << '\n';
            return;
        }

        long long v = diff / cnt;

        if (v <= prev || v <= 0) {
            cout << -1 << '\n';
            return;
        }

        value[shadow] = v;
        prev = v;
    }

    if (m == 1)
        value[groups.back().first] = 1;
    else
        value[groups.back().first] = prev + 1;

    for (int i = 0; i < n; i++)
        cout << value[b[i]] << " ";
    cout << '\n';
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