#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t firstoccurence(int [],int ,int );
int32_t lastoccurence(int [],int ,int );
int32_t main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"No of Occurence = "<<lastoccurence(a,n,k)-firstoccurence(a,n,k)+1<<endl;
}
int32_t firstoccurence(int a[],int n,int k){
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
	return ans;
}
int32_t lastoccurence(int a[],int n,int k){
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
	return ans;
}