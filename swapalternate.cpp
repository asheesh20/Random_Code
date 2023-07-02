#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void alternate(int a[],int n){
	for(int i=0;i<n;i+=2){
		if(i+1<n) swap(a[i],a[i+1]);
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int32_t main(){
	int a[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	alternate(a,n);
}