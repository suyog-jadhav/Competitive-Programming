#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int tank = 0,prev = 0;
        for(int i:a){
            tank = max(tank,(i-prev));
            prev = i;
        }
        tank = max(tank,2*(x-prev));
        cout<<tank<<endl;
    }
    return 0;
}