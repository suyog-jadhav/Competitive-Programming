#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int s = a.size();
        if(s == 2) cout<<"Yes"<<endl;
        else{
        	unordered_map<int,int> mp;
 			for(int i:a){
 				mp[i]++;
 			} 
 			if(mp.size()==1) cout<<"Yes"<<endl;      	
 			else if(mp.size()==2){
 				int x[2],j=0;
 				for(auto i:mp){
 					x[j++]=i.second;
 				}
 				if(abs(x[0]-x[1])==1 && n%2==1) cout<<"Yes"<<endl;
 				else if(x[0]==x[1]) cout<<"Yes"<<endl;
 				else cout<<"No"<<endl;
 			}
 			else cout<<"No"<<endl;
        }
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int T; cin >> T;
//     while (T--) {
//         int n, x;
//         cin >> n;

//         unordered_map<int,int> mp;
//         for (int i = 0; i < n; i++)
//             cin >> x, mp[x]++;

//         if (n == 2 || mp.size() == 1) {
//             cout << "Yes\n";
//             continue;
//         }

//         if (mp.size() != 2) {
//             cout << "No\n";
//             continue;
//         }

//         auto it = mp.begin();
//         int a = it->second;
//         int b = (++it)->second;

//         cout << (a == b || ((n & 1) && abs(a - b) == 1)
//                  ? "Yes\n" : "No\n");
//     }
// }