// https://codeforces.com/problemset/problem/1726/A

#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
   
    while (t--) {
    	 int n;
        cin >> n;

        vector<int> a(n);

        for (int &x : a)
            cin >> x;

        int ans = a[n - 1] - a[0];

        // Case 1
        for (int i = 1; i < n; i++)
            ans = max(ans, a[i] - a[0]);

        // Case 2
        for (int i = 0; i < n - 1; i++)
            ans = max(ans, a[n - 1] - a[i]);

        // Case 3
        for (int i = 0; i < n - 1; i++)
            ans = max(ans, a[i] - a[i + 1]);

        cout << ans << "\n";
    	
    }
    
    

	
    return 0;
}