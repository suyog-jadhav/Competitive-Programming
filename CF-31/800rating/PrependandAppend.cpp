//https://codeforces.com/problemset/problem/1791/C

#include <bits/stdc++.h>

using namespace std;

int main(){
   	int t;
   	cin>>t;
   	while(t--){
   		int n;
   		cin>>n;
   		string s;
   		cin>>s;
   		
   		int start = 0, last = n-1;
   		while(start<last){
   			if(s[start] != s[last]) {
   				last --;
   				start ++;
   			}
   			else break;
   		}
   		cout<<(last - start +1)<<endl;
   	}
   	return 0;
}