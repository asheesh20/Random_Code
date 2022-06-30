#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t set_bits(int );
int32_t main(){
	ll a,b;
	cin>>a>>b;
	cout<<set_bits(a)+set_bits(b);
}
int32_t set_bits(int x){
	ll c(0);
	while(x!=0){
		if(x&1) c++;
		x=x>>1;
	}
	return c;
}