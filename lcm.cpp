#include<bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
using namespace std;
int32_t main(){
	ll n1,n2,n3,i;
	cin>>n1>>n2;
	n3=max(n1,n2);
	for(i=n3;i>0;i++){
		if(i%n1==0 && i%n2==0){
			cout<<i;
			break;
		}
	}
}

// 2nd Approach :

int32_t main(){
	ll n1,n2,i,r;
	cin>>n1>>n2;
	ll n3=min(n1,n2);
	for(i=1;i<=n3;i++){
		if(n1%i==0 && n2%i==0) r=i;
	}
	ll lcm=(n1*n2)/r;
	cout<<lcm;
}