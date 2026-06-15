//https://codeforces.com/problemset/problem/1805/A

#include <bits/stdc++.h>

using namespace std;

int main(){
   	int t;
   	cin>>t;
   	while(t--){
   		int n;
   		cin>>n;
   		int temp,x=0;
   		for(int i=0;i<n;i++){
   			cin>>temp;
   			x ^= temp;
   		}
   		if(n%2 == 1) {
   			cout<<x<<endl;
   			continue;
   		}	
   		if(x == 0){
   			cout<<x<<endl;
   			continue;
   		}
   		cout<<-1<<endl;
   	}
   	return 0;
}