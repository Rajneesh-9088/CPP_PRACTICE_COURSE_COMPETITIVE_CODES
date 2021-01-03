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
int32_t main(){
	// io();
	int t;
	cin>>t;
	while(t--){
		int n,k;
		k = 0;
		cin>>n;
		char grid[n][n];
		for(int i = 0;i<n;i++){
			for(int j =0;j<n;j++){
				cin>>grid[i][j];
			}
		}
		if(n==1 or n==2){
			for(int i = 0;i<n;i++){
				for(int j = 0;j<n;j++){
					cout<<grid[i][j];
				}
				cout<<"\n";
			}
			cout<<"\n";
		}
		if(n== 1 or n==2){
			break;
		}
		for(int i = 0;i<n;i++){
			for(int j = 0;j<n;j++){
				if(grid[i][j]=='X' or grid[i][j]=='O'){
					k++;
				}
			}
			
		}
		k = k/3;
		int ans = 0;
		for(int l = 1;l<=k;l++){
			for(int i = 0;i<n;i++){
				for(int j = 1;j<n;j++){
						if((grid[i][j-1]=='X' and grid[i][j]=='X') or (grid[i][j-1]=='O' and grid[i][j]=='O')  ){
							grid[i][j-1] = '.';
								ans++;

						}
				}
			}
		}
		ans = 0;
		while(ans<=n-1){
			for(int i = 0;i<n;i++){
				for(int j = 1;j<n;j++){
				if((grid[j-1][i]=='X' and grid[j][i]=='X') or (grid[j-1][i]=='O' and grid[j][i]=='O')  ){
							grid[j-1][i] = '.';
								// ans++;

						}	
						ans++;				

			}
		}


	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			cout<<grid[i][j];
		}
		cout<<"\n";
	}
	cout<<"\n";
	
}
}


  		



