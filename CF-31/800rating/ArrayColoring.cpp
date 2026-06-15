//https://codeforces.com/problemset/problem/1857/A

#include <bits/stdc++.h>

using namespace std;

int main(){
   	int t;
   	cin>>t;
   	while(t--){
   		int n;
   		cin>>n;
   		int count = 0,temp;
   		
   		for(int i=0;i<n;i++){
   			cin>>temp;
   			if(temp&1) count++;
   		}
   		if(count&1) 
   			cout<<"NO"<<endl;
   		else 
   			cout<<"YES"<<endl;
   	}
   	return 0;
}