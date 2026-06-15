//https://codeforces.com/contest/2233/problem/A

#include <bits/stdc++.h>

using namespace std;

int ceil1(int n,int d){
	return (n+d-1)/d;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y,z;
        cin>>n>>x>>y>>z;
        
        int ans1 = ceil1(n,x+y);
		if(z*x<=n){
			ans1 = min(ans1, ceil1(n-z*x,x+y*10)+z);
		}    
		cout<<ans1<<endl;
    }
    return 0;
}