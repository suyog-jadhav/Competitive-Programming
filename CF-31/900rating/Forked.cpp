// https://codeforces.com/problemset/problem/1904/A

#include <bits/stdc++.h>
using namespace std;

// 4 possible positions of king and queen
int pos_x[4] = {-1,-1,1,1};
int pos_y[4] = {1,-1,-1,1};

int main() {
    int t;
    cin >> t;
   
    while (t--) {
        long long a,b,k_x,k_y,q_x,q_y;
        cin>>a>>b>>k_x>>k_y>>q_x>>q_y;
        
        set<pair<int,int>> king,queen;
        // insert all possible positions of king and queen in the set
        for(int i=0;i<4;i++){
        	king.insert({k_x + pos_x[i]*a,k_y + pos_y[i]*b});
        	king.insert({k_x + pos_x[i]*b,k_y + pos_y[i]*a});
        	
        	queen.insert({q_x + pos_x[i]*a,q_y + pos_y[i]*b});
        	queen.insert({q_x + pos_x[i]*b,q_y + pos_y[i]*a});  
        }
        int ans = 0;
        // check how many positions of king are also present in queen's set
	    for(auto pos:king){
	    	if(queen.find(pos) != queen.end())
	    		ans++;
	    }
	    cout<<ans<<endl;
    }
    
    

	
    return 0;
}