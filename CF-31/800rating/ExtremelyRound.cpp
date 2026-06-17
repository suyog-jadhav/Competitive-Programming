// https://codeforces.com/problemset/problem/1766/A

#include <bits/stdc++.h>
using namespace std;

bool isRound(long long n){
	bool flag = 1;
	int count = 0;
	while(n){
		if(n%10 != 0 ) count++;
		if(count > 1){ flag=0;break;}
		n /= 10;
	}
	return flag;
}

int main() {
    int t;
    cin >> t;
    vector<int> store;
    for(long long i=1;i<=999999;i++){
    	if(isRound(i)) store.push_back(i);
    }

    while (t--) {
        long long n;
        cin >> n;
		int ans=0;
		for(auto i:store){
			if(i <= n) ans++;
		}
		cout<<ans<<endl;
		
        
    }

    return 0;
}