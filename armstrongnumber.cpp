// Armstrong Number 

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	ll n,i,r,s(0),d;
	cin>>n;
	d=floor(log10(n))+1; // counts number of digits in a number
	for(i=n;i>0;i/=10){
		r=i%10;
		s=s+pow(r,d);
	}
	if(s==n) cout<<"It is an Armstrong Number";
	else cout<<"It is not an Armstrong Number";
}
