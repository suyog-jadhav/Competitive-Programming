// https://codeforces.com/problemset/problem/1807/D

#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
   
    while (t--) {
    	long long n,q;
    	cin>>n>>q;
    	vector<long long> a(n);
    	for(int i=0;i<n;i++) cin>>a[i];
    	vector<long long> pre(n);
    	pre[0]=a[0];
    	for(int i=1;i<n;i++)
    		pre[i] += pre[i-1]+a[i];
    		
    	long long l,r,k,temp;
    	for(int i=0;i<q;i++){
    		cin>>l>>r>>k;
    		temp = (abs(l-r)+1)*k;
    		if(l > 1)
    		temp += pre[l-2];
    		
    		temp += (pre[n-1]-pre[r-1]);
    		if(temp%2==1)cout<<"YES"<<endl;
    		else cout<<"NO"<<endl; 
    	}
    	
    	
    }
    
    

	
    return 0;
}