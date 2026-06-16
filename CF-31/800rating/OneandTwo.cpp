// https://codeforces.com/problemset/problem/1788/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, count = 0;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 2) count++;
        }

        if (count % 2) {
            cout << -1 << endl;
            continue;
        }

        int seen = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 2) seen++;

            if (seen == count / 2) {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}