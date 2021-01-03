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
		int n,p,rem;
		p = 0;
		rem = 0;
		cin>>n;
		string s;
		cin>>s;
		for(int i = 0;i<s.length();i++){
			if(s[i]=='1'){
				p++;
			}
		}
		rem = 120 - n;
		rem = rem + p;
		if(rem>=90){
			cout<<"YES"<<"\n";
		}else{
			cout<<"NO"<<"\n";
		}
		

	}
	
}


  		



