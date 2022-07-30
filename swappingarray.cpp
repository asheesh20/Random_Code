#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void swaparray(int [],int );
void print(int [],int );
int32_t main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	swaparray(a,n);
	print(a,n);
}
void swaparray(int a[],int n){
	int start=0,end=n-1;
	while(start<end){
		swap(a[start++],a[end--]);
	}
}
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}