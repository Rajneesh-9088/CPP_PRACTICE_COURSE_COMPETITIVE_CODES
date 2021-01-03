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
	int n ;
	cin>>n;
	int a[n+1];
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	int ans = 0;
	for(int i = 1;i<=n-1;i++){

		for(int j = i+1;j<=n;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
				ans++;
				
			}
		}
		// cout<<ans<<'\n';
	}

	cout<<ans;
}


  		



