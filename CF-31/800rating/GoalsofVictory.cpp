#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,temp;
        cin>>n;
        long long sum = 0;
        for(int i=0;i<n-1;i++) {
        	cin>>temp;
        	sum += temp;
        }
        cout<<sum*-1<<endl;
    }
    return 0;
}