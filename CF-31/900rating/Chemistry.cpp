// https://codeforces.com/problemset/problem/1883/B

#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
   
    while (t--) {
    	long long n,k;
    	cin>>n>>k;
    	string s;
    	cin>>s;
    	
    	int a[26] = {0};
    	for(auto i:s){
    		a[i-'a']++;
    	}
    	int count = 0;
    	for(int i=0;i<26;i++){
    		if(a[i]%2 == 1) {
    			count++;
    		}
    	}
    	if(count <= k+1){
    		cout<<"YES"<<endl;
    	}
    	else
    		cout<<"NO"<<endl;
    	
    	
    }
    
    

	
    return 0;
}