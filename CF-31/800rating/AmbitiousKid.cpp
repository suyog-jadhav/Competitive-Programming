//https://codeforces.com/problemset/problem/1866/A

#include <bits/stdc++.h>

using namespace std;

int main(){
   	int n;
   	cin>>n;
   	int curmin = INT_MAX, temp ;
   	for(int i=0;i<n;i++){
   		cin>>temp;
   		curmin = min(curmin,(abs(temp-0)));
   	}
   	cout<<curmin<<endl;
    return 0;
}