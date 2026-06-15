//https://codeforces.com/problemset/problem/1862/B

#include <bits/stdc++.h>

using namespace std;

int main(){
   	int t;
   	cin>>t;
   	while(t--){
   		long long n;
   		cin>>n;
   		
   		vector<long long> b(n);
   		for(long long i=0;i<n;i++){
   			cin>>b[i];
   		}
   		
   		vector<long long> a;
   		a.push_back(b[0]);
   		
   		for(long long i=1;i<n;i++){
   			if(b[i-1] <= b[i]){
   				a.push_back(b[i]);
   			}
   			else{
   				a.push_back(b[i]);
   				a.push_back(b[i]);
   			}
   		}
   		
   		cout<<a.size()<<endl;
   		for(auto i:a)
   			cout<<i<<" ";
   		cout<<endl;
   	}
}