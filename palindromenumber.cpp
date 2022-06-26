#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	ll n,i,r,s(0);
	cin>>n;
	for(i=n;i>0;i/=10){
		r=i%10;
		s=s*10+r;
	}
	if(s==n) cout<<"It is Palindrome Number";
	else cout<<"It is not Palindrome Number";
}