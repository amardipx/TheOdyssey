#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> freq;
    int maxFreq = 0;

    for (int i=0; i<n; i++) {
        cin >> a[i];
        freq[a[i]]++;
        maxFreq = max(maxFreq, freq[a[i]]);
    }

    int correct = maxFreq;
    int wrong = n - correct;
    int cost = 0;

    while (correct < n) {
        cost += 1;
        int swaps = min(wrong, correct);
        cost += swaps;
        correct += swaps;
        wrong -= swaps;
    }

    cout << cost << endl;
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