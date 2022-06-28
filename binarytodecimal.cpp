#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	ll n,i(0),s(0);
	cin>>n;
	while(n!=0){
	  ll r=n%10;
	  s=s+(pow(2,i)*r);
	  i++;
	  n/=10;
	}
	cout<<s;
}