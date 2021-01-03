#include<bits/stdc++.h>
using namespace std;
#define int long long
void io(){

     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 	 #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
   	 #endif
}
void solve(int a[][100],int n){
	for(int col = n-1;col>=0;col--){
		for(int row=0;row<=n-1;row++){
			cout<<a[row][col]<<" ";
		}
		cout<<"\n";
	}
}
int32_t main(){
	io();
	int n;
	cin>>n;
	// you can modify size of 2d array according to you constraint
	int a[100][100];
	for(int i=0;i<n;i++){
		for(int j = 0;j<n;j++){
			cin>>a[i][j];
		}
	}
	solve(a,n);
	
}


  		



