//https://codeforces.com/problemset/problem/1794/B

#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
   
    while (t--) {
    	long long n;
    	cin>>n;
    	vector<long long> a(n);
    	for(int i=0;i<n;i++) cin>>a[i];
    	
    	for (int i = 0; i < n; i++)
		{
			if (a[i] == 1)
				a[i]++; // Increment 1 to 2
		}
    	cout<<a[0]<<" ";
    	for(int i=0;i<n-1;i++){
    		if(a[i+1]%a[i]==0)
    			a[i+1]++;
    		cout<<a[i+1]<<" ";
    	}
    	cout<<endl;
    	
    }
    
    

	
    return 0;
}