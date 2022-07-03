#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t sumofarray(int [],int );
int32_t main(){
	int n;
	cin>>n;
	int a[n];
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Sum of Elements of Array is "<<sumofarray(a,n)<<endl;
}
int32_t sumofarray(int a[],int n){
	int s(0);
	for(ll i=0;i<n;i++){
		s+=a[i];
	}
	return s;
}
