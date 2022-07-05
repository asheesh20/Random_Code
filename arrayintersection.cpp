#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	ll n,m,i,j;
	cin>>n>>m;
	int a[n],b[m];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(j=0;j<m;j++){
		cin>>b[j];
	}
	i=0;j=0;
	while(i<n && j<m){
		if(a[i]==b[j]){
			cout<<a[i]<<" ";
			i++;
			j++;
		}
		else if(a[i]<b[j]) i++;
		else j++;
	}
}