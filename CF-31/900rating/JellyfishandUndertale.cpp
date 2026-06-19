// https://codeforces.com/problemset/problem/1875/A

#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
   
    while (t--) {
    	long long a,b,n;
    	cin>>a>>b>>n;
    	
    	vector<long long> tools(n);
    	for(int i=0;i<n;i++) cin>>tools[i];
    	
    	long long ans = 0;
    	for(auto i:tools){
    		ans += min(a-1,i);
    	}
    	cout<<ans + b <<endl;
    	
    	
    }
    
    

	
    return 0;
}