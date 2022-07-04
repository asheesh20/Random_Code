#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void reverse(int a[],int n){
	for(int i=0;i<n;i+=2){
		if(i+1<n) swap(a[i],a[i+1]);
	}
}
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int32_t main(){
	int a[8]={-2,5,11,90,34,-65,2,78};
	int b[5]={4,-1,78,87,0};
	reverse(a,8);
	reverse(b,5);
	print(a,8);
	print(b,5);
}