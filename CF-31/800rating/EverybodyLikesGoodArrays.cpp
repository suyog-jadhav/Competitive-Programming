//https://codeforces.com/problemset/problem/1777/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
           
        }

        int i=0,opr = 0;
        while(i<n-1){
        	if(a[i]%2 == a[i+1]%2){
        		opr += 1;
        		
        	}
        	i++;
        }
        cout<<opr<<endl;
    }

    return 0;
}