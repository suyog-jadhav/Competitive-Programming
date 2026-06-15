//https://codeforces.com/problemset/problem/1858/A

#include <bits/stdc++.h>

using namespace std;

int main(){
   	int t;
   	cin>>t;
   	while(t--){
   		long long a,b,c;
   		cin>>a>>b>>c;
   		if(a == b){
   			if((a+b+c)&1)
   				cout<<"First"<<endl;
	   		else 
	   			cout<<"Second"<<endl;
   		}else{
   			if(a > b)
   				cout<<"First"<<endl;
	   		else 
	   			cout<<"Second"<<endl;
   		}
   		
   		
   		
   	}
   	return 0;
}