
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
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		// if(a%7==0 or b%7==0 or c%7==0){
		// 	cout<<"YES"<<"\n";
		// 	continue;
		// }
		int ans1,ans2,ans3,ans4;
		ans1 = a + b;
		ans2 = b + c;
		ans3 = c + a;
		if(ans1%7==0 or ans2%7==0 or ans3%7==0){
			cout<<"YES"<<"\n";
			continue;
		}
		ans4 = a+b+c;
		if(ans4%7==0){
			cout<<"YES"<<"\n";
		}
		cout<<"NO"<<"\n";

	}
	
}


  		



