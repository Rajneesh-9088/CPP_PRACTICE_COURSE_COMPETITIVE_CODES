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
	int d1,v1,d2,v2,p;
	cin>>d1>>v1>>d2>>v2>>p;
	int i = abs(d1-d2);
	int reduce;
		if(d1<d2){
			 reduce = v1;
		}else{
				reduce = v2;
		}
		int ans = 0;
		while(p>=0){
			if(i==0){ 
				p = p-(v1+v2);
			    ans++;
				
			   
			}else{
				p = p - reduce;
				ans++;
				i--;
			}
			
		}
		cout<<ans;
}

	

	



  		





