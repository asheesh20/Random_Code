#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void print(int [],int );
void sort01(int [],int );
int32_t main(){
	int i,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort01(a,n);
	print(a,n);
}
void sort01(int a[],int n){
	int i=0,j=n-1;
	while(i<j){
		if(a[i]==0) i++;
		else if(a[j]==1) j--;
		else {
			swap(a[i],a[j]);
			i++;j--;
		}
	}
}
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}