#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int binarysearch(int [],int ,int);
int32_t main(){
	int i,n,k;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<binarysearch(a,n,k);
}
int binarysearch(int a[],int n,int key){
	int start=0,end=n-1;
	int mid=start+(end-start)/2;
	while(start<=end){
		if(a[mid]==key) return mid;
		else if(a[mid]<key) start=mid+1;
		else end=mid-1;
		mid=(start+end)/2;
	}
	return -1;
}