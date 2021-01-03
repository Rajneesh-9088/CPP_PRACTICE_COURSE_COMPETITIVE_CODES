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
		int x;
		cin>>x;
		string s;
		if(x>45){
			cout<<-1<<"\n";
		}
		for(int i = 9;i>=1;i--){
			if(x<=9 and x<=i){
				s = s+'i';
			
				break;
			}else{
				s = s+'i';
				x = x - i;
			}
		}
		reverse(s.begin(),s.end());
		cout<<s<<"\n";
	}
	
}


  		



