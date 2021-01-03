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
		int a,b;
		cin>>a>>b;
		if(a==1 and b == 1){
				cout<<1<<"\n";
		}else if(a==1){
			if(b&1==0){
				b = b/2;
				cout<<b<<"\n";
			}else{
				b = b/2;
				b++;
				cout<<b<<"\n";
			}
		}else if(b==1){
			if(a&1==0){
				a = a/2;
				cout<<a<<"\n";
			}else{
				a = a/2;
				a++;
				cout<<a<<"\n";
			}
		}else if(a&1 and b&1){
			int ans = a*b;
			 ans = ans/2;
			 ans++;
			 cout<<ans<<"\n";
	     }else{
	     	int ans = a*b;
	     		ans = ans/2;
	     		cout<<ans<<"\n";
	     }

	
}
}


  		




