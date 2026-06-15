#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s,k,temp,flag=1;
        cin>>s>>k;
        for(int i=0;i<s;i++){
        	cin>>temp;
        	if(temp == k){
        		flag = 0;
        	}
        }
        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}