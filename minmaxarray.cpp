#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int getMax(int [],int );
int getMin(int [],int );
int32_t main(){
	int a[5]={65,3,-19,85,-123};
	cout<<"Max is : "<<getMax(a,5)<<endl;
	cout<<"Nin is : "<<getMin(a,5)<<endl;
}
int getMax(int a[],int n){
	int i,ma=INT_MIN;
	for(i=0;i<n;i++){
		if(a[i]>ma) ma=a[i];
	}
	return ma;
}
int getMin(int a[],int n){
	ll i,mi=INT_MAX;
	for(i=0;i<n;i++){
		if(mi>a[i]) mi=a[i];
	}
	return mi;
}