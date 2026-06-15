//https://codeforces.com/problemset/problem/1853/A

#include <bits/stdc++.h>

using namespace std;

int main(){
   	int t;
   	cin>>t;
   	while(t--){
   		int n;
   		cin>>n;
   		vector<long long> a(n);
   		for(int i=0;i<n;i++) cin>>a[i];
   		
   		if(is_sorted(a.begin(),a.end())){
   			//code
   			long long mindiff = LLONG_MAX;
   			for(int i=1;i<n;i++){
   				if(abs(a[i-1]-a[i]) < mindiff)
   					mindiff = abs(a[i-1]-a[i]);
   			}
   			cout<<(mindiff+2)/2<<endl; 
   		}
   		else cout<<0<<endl;
   	}
   	return 0;
}