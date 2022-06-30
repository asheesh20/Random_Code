#include<bits/stdc++.h>
#define ll long long 
using namespace std;
uint32_t fibonacci(int );
int32_t main(){
	ll n;
	cin>>n;
	cout<<fibonacci(n);
}
uint32_t fibonacci(int n){
	if(n==1) return 0;
	if(n==2) return 1;
	ll a(0),b(1),c(0);
	for(ll i=3;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}