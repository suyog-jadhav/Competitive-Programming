//https://codeforces.com/problemset/problem/1850/D
#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
   
    while (t--) {
    	long long n,k;
    	cin>>n>>k;
    	vector<long long> a(n);
    	for(long long i=0;i<n;i++) cin>>a[i];
    	sort(a.begin(),a.end());
    	
    	long long maxSub=0,left = 0;
    	for(long long right=1;right<n;right++){
    		if(a[right]-a[right-1] > k){
    			maxSub = max(maxSub,right-left);
    			left = right;
    		} 
    		
    	}	
  		maxSub = max(maxSub,n-left);  	
    	cout<<n-maxSub<<endl;
    }
    
    

	
    return 0;
}