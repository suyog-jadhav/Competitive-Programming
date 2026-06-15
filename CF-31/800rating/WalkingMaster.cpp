//https://codeforces.com/problemset/problem/1806/A

#include <bits/stdc++.h>

using namespace std;

int main(){
   	int t;
   	cin>>t;
   	while(t--){
   		long long a,b,c,d;
   		cin>>a>>b>>c>>d;
   		if(d < b){
   			cout<<-1<<endl;
   			continue;
   		}
   		
   		long long moves = 0;
   		moves = abs(b-d);
   		a += moves;
   		
   		if(a < c) {
   			cout<<-1<<endl;
   			continue;
   		}
   		
   		moves += abs(c-a);
   		cout<<moves<<endl;
   		
   		
   		
   	}
   	return 0;
}