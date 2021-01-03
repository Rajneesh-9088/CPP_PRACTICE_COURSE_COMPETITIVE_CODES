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
	int t;cin>>t;
	cin>>t;
	while(t--){
		string s1;
		cin>>s1;
		if(s1.length()==0){
			cout<<0<<"\n";
		}
		stack<char> s;
		int ans = 0;
		for(int i = 0;i<s1.length();i++){
			if(s1[i]=='(' || s1[i]== '['){
				s.push(s1[i]);
			}
			if(s1[i]==')'){
				while(s.top() !='('){
					ans++;
					// s.pop();

				}
			}
			if(s1[i]==']'){
				while(s.top() !='['){
					ans++;
				}
			}
		}
		cout<<ans<<"\n";
	}
	
}


  		



