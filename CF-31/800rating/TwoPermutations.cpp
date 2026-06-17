//https://codeforces.com/problemset/problem/1761/A
#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
   
    while (t--) {
        int n,a,b;
        cin>>n>>a>>b;
        if(a==b && a==n) {cout<<"YES"<<endl;continue;}
        if((a+b+2 <= n)) {cout<<"YES"<<endl;continue;}
		cout<<"NO"<<endl;
        
    }

    return 0;
}