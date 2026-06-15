// /https://codeforces.com/problemset/problem/1834/A
#include <bits/stdc++.h>

using namespace std;

int main(){
   	int t;
   	cin>>t;
   	while(t--){
   		int n;
   		cin>>n;
   		int one = 0, minusOne = 0,temp,opr = 0;
   		for(int i=0;i<n;i++){
   			cin>>temp;
   			if(temp == 1) one++;
   			else minusOne++;
   		}
   		if(one < minusOne){
   			temp = (minusOne - one);
   			opr = (temp+1)/2; 
   			minusOne = minusOne - opr;
   		}
   		if(minusOne%2 != 0){
   			opr += 1;
   		}
   		cout<<opr<<endl;
   		
   	}
   	return 0;
}