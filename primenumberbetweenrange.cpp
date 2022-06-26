#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	ll a,b,i,j;
	bool z=true;
	cin>>a>>b;
	for(i=a;i<=b;i++){z=true;
		for(j=2;j<i;j++){
			if(i%j==0){
				z=false;
				break;
			}
		}
		if(i==0||i==1) continue;
		if(z) cout<<i<<" ";
	}
}