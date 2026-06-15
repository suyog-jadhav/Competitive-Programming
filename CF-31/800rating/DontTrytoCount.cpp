#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        
        int i = 0,flag=1;
        while(i<=5){
        	if(x.find(s) != string::npos){
        		cout<<i<<endl;
        		flag = 0;
        		break;
        	}
        	x.append(x);
        	i++;
        }
        if(flag) cout<< -1 <<endl;
    }
    return 0;
}