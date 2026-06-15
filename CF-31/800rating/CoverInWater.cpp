#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int dot = 0,cons = 0;
        for(char c:s){
        	if(c == '.'){
        		cons++;
        		dot++;
        		if(cons == 3){
        			break;
        		}
        	}else cons = 0;
        }
        if(cons == 3) cout<<2<<endl;
        else cout<<dot<<endl;
    }
    return 0;
}