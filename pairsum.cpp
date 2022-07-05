#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int i,j,n,s;
	cin>>n>>s;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==s) cout<<a[i]<<" "<<a[j]<<endl;
		}
	}
}