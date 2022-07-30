/*

Link : https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

*/

#include<bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 	
using namespace std;
int32_t getmin(int [],int );
int32_t getmax(int [],int );
int32_t main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Minimum Element is : "<<getmin(a,n)<<endl;
	cout<<"Maximum Element is : "<<getmax(a,n)<<endl;
}
int32_t getmin(int a[],int n){
	int minelement=INT_MAX;
	for(int i=0;i<n;i++){
		minelement=min(a[i],minelement);
	}
	return minelement;
}
int32_t getmax(int a[],int n){
	int maxelement=INT_MIN;
	for(int i=0;i<n;i++){
		maxelement=max(a[i],maxelement);
	}
	return maxelement;
}

/* 
TC : O(N)
SC : O(1)
*/
