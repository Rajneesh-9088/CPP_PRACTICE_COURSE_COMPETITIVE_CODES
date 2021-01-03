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
vector< pair<int, int> > v(105);
int32_t main(){
	io();
	int t,n,k,parity;
	parity = 0;
	cin>>t;
	while(t--){
		v.clear();
		cin>>n>>k;
		for(int i= 0;i<n;i++){
			int x,y;
			cin>>x>>y;
			v.push_back({x,y});
		}
		for(auto p:v){
			int x1 = p.first;
			int y1 = p.second;
			for(auto q:v){
				int x2 = q.first;
				int y2 = q.second;
				int ans1 = abs(x1-x2);
				int ans2 = abs(y1-y2);
				if(ans1 ==0 and ans2 ==0){
					continue;
				}
				
				if(ans1+ans2 == k){
					parity = 1;
					cout<<1<<"\n";
					break;
					

				}
			}
			if(parity){
				break;
			}
		}
		cout<<-1<<"\n";
	}

	
}


  		



