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
	io();
	int n,k;cin>>n>>k;
	int a[n][n];
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int i,j;
	i = 0; j = n-1;
	while(1){
		if(a[i][j]<k){
			i++;
		}else if(a[i][j]>k){
			j--;
		}else{
			cout<<i<<" "<<j<<"\n";
			break;
		}
	}
	
}


  		




