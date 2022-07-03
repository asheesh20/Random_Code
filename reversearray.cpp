// 1st Approch

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void print(int [],int );
void reverse(int [],int );
int32_t main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	reverse(a,n);
	print(a,n);
}
void reverse(int a[],int n){
	int start=0,end=n-1;
	while(start<=end){
		swap(a[start],a[end]);
		start++;
		end--;
	}
}
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}


// 2nd Approch


#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main(){
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	for(ll i=n-1;i>=0;i--){
		cout<<a[i]<<" ";
	}
}