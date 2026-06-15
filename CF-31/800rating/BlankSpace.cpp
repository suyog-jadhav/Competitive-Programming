//https://codeforces.com/problemset/problem/1829/B

#include <bits/stdc++.h>

using namespace std;

int main(){
   	int t;
   	cin>>t;
   	while(t--){
   		int n,temp,count=0,maxCount = INT_MIN;
   		cin>>n;
   		for(int i=0;i<n;i++){
   			cin>>temp;
   			if(temp == 0){
   				count++;
   			}
   			else{
   				maxCount = max(maxCount,count);
   				count=0;
   			}			
   		}
   		maxCount = max(maxCount,count);
   		cout<<maxCount<<endl;
   	}
   	return 0;
}