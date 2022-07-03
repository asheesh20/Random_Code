#include<bits/stdc++.h>
#define ll long long 
using namespace std;
bool poweroftwo(int );
int32_t main(){
	ll n;
	cin>>n;
	ll res=poweroftwo(n);
	if(res==1) cout<<"Yes";
	else cout<<"No";
}
bool poweroftwo(int n){
	if(n==0||n<0) return false;
	ll c(0);
	while(n!=0){
		if(n&1) c++;
		n=n>>1;
	}
	if(c==1) return true;
	return 0;
}