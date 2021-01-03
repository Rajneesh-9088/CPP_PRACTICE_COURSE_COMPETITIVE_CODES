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
		int n;
		cin>>n;
		string s1,s2;
		cin>>s1>>s2;
		int one1,zero1,one2,zero2;
		one1 = 0;
		zero1= 0;
		one2 = 0;
		zero2 = 0;
		for(int i = 0;i<s1.length();i++){
			if(s1[i]=='1'){
				one1++;
			}else{
				zero1++;
			}
		}
		for(int i = 0;i<s2.length();i++){
			if(s2[i]=='1'){
				one2++;
			}else{
				zero2++;
			}
		}
		if(one1==one2 and zero1==zero2){
			cout<<"Yes"<<"\n";
		}else{
			cout<<"No"<<"\n";
		}
	}
	
}


  		



