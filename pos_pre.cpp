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
		int n,k,cnt,temp;
		cin>>n>>k;
		int a[n+1];
		for(int i =1;i<=n;i++){
			a[i] = -i;
		}
		cnt = n/2;
		temp = cnt;
		int i =2;
		while(cnt!=0){
			cnt--;
			a[i] *= -1;
			i = i+2;
		}
		cnt = temp;
		if(k>cnt){
			int i = n;
			while(cnt!=k){
				if(a[i]<0){
					a[i] *= -1;
					cnt++;

				}
				if(i>1){
					i--;
				}
			}
		}if(k<cnt){
			int i = n;
			while(cnt!=k){
				if(a[i]>0){
					a[i] *= -1;
					cnt--;
				}
				if(i>1){
					i--;
				}
			}
		}
		for(int i =1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
}


  		



