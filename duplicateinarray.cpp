#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int res=0;
	for(i=0;i<n;i++){
		res=res^a[i];
	}
	for(i=1;i<n;i++){
		res=res^i;
	}
	cout<<res;
}