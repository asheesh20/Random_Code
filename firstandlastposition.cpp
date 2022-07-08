#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void firstocc(int [],int ,int );
void lastocc(int [],int ,int );
int32_t main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	firstocc(a,n,k);
	cout<<" "; 
	lastocc(a,n,k);
}
void firstocc(int a[],int n,int k){
	int start=0,end=n-1;
	int mid=start+(end-start)/2;
	int ans=-1;
	while(start<=end){
		if(a[mid]==k){
			ans=mid;
			end=mid-1;
		}
		else if(a[mid]<k) start=mid+1;
		else end=mid-1;
		mid=start+(end-start)/2;
	}
	cout<<ans;
}

void lastocc(int a[],int n,int k){
	int start=0,end=n-1;
	int mid=start+(end-start)/2;
	int ans=-1;
	while(start<=end){
		if(a[mid]==k){
			ans=mid;
			start=mid+1;
		}
		else if(a[mid]<k) start=mid+1;
		else end=mid-1;
		mid=start+(end-start)/2;
	}
	cout<<ans;
}