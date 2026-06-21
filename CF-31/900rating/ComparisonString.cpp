//https://codeforces.com/problemset/problem/1837/B

#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
   
    while (t--) {
    	long long n;
    	cin>>n;
    	string s;
    	cin>>s;
    	long longest = 0,curr =1;
    	char prev = 'x';
    	
    	for(char c:s){
    		if(c != prev){
    			prev = c;
    			longest = max(longest,curr);
    			curr = 1;
    		}else curr++;
    	}
    	longest = max(longest,curr);
    	cout<<longest+1<<endl;
    }
    
    

	
    return 0;
}