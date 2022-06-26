#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	ll n,a(0),b(1),c;
	cin>>n;
	cout<<a<<","<<b<<",";
	for(ll i=1;i<=n-2;i++){
		c=a+b;
		cout<<c;
		a=b;
		b=c;
		if(i!=n-2) cout<<",";
	}
}