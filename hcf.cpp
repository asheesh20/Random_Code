// !st Approach :

#include<bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
using namespace std;
int32_t main(){
	ll n1,n2,n3,i,r;
	cin>>n1>>n2;
	n3=min(n1,n2);
	for(i=1;i<=n3;i++){
		if(n1%i==0&&n2%i==0) r=i;
	}
	cout<<r;
}

// 2nd Approach :

#include<bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
using namespace std;
int32_t main(){
	ll n1,n2;
	cin>>n1>>n2;
	while(n1!=n2){
		if(n1>n2) n1-=n2;
		else n2-=n1;
	}
	cout<<n1;
}