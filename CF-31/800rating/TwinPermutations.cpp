//https://codeforces.com/problemset/problem/1831/A
#include <bits/stdc++.h>

using namespace std;

int main(){
   	int t;
   	cin>>t;
   	while(t--){
   		int n;
   		cin>>n;
   		vector<int> a(n),b(n);
   		for(int i=0;i<n;i++) cin>>a[i];
   		
   		for(int i=0;i<n;i++){
   			b[i] = n+1-a[i];
   		}
   		for(auto i:b) cout<<i<<" ";
   		cout<<endl;
   		
   	}
   	return 0;
}