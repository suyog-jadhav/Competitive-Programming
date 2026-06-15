#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char c;
        int score[10][10] = {
        	{1,1,1,1,1,1,1,1,1,1},
        	{1,2,2,2,2,2,2,2,2,1},
        	{1,2,3,3,3,3,3,3,2,1},
        	{1,2,3,4,4,4,4,3,2,1},
        	{1,2,3,4,5,5,4,3,2,1},
        	{1,2,3,4,5,5,4,3,2,1},
        	{1,2,3,4,4,4,4,3,2,1},
        	{1,2,3,3,3,3,3,3,2,1},
        	{1,2,2,2,2,2,2,2,2,1},
        	{1,1,1,1,1,1,1,1,1,1}
        	};
        long long result = 0;
        for(int i=0;i<10;i++){
        	for(int j=0;j<10;j++){
        		cin>>c;
        		if(c == 'X'){
        			result += score[i][j];
        		}
        	}
        }
        cout<<result<<endl;
    }
    return 0;
}