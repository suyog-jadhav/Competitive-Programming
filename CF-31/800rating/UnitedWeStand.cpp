//https://codeforces.com/problemset/problem/1859/A

#include <bits/stdc++.h>

using namespace std;

int main(){
   	int t;
   	cin>>t;
   	while(t--){
   		long long n;
   		cin>>n;
   		
   		vector<long long> a(n);
   		for(long long i=0;i<n;i++){
   			cin>>a[i];
   		}
   		
   		vector<long long> b,c;
   		long long minE = *min_element(a.begin(),a.end());
   		for(auto i:a){
   			if(i == minE)
   				b.push_back(i);
   			else 
   				c.push_back(i);
   		}
   		
   		if(b.size() == 0 || c.size() == 0){
   			cout<< -1 <<endl;
   			continue;
   		}	
   		cout<<b.size()<<" "<<c.size()<<endl;
   		for(auto i:b) cout<<i<<" ";
   		cout<<endl;
   		for(auto i:c) cout<<i<<" ";
   		cout<<endl;
   		
   	}
   	return 0;
}