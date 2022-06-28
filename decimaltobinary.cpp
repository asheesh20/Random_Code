#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	ll n,i(0),s(0),bit;
	cin>>n;
	while(n!=0){
		bit=n&1;
		s=s+(pow(10,i)*bit);
		i++;
		n=n>>1;
	}
	cout<<s;
}