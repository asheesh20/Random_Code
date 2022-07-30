#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void search(int [],int ,int );
int32_t main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	search(a,n,k);
	}
void search(int a[],int n,int k){
	bool b=true;
	for(int i=0;i<n;i++){
		if(a[i]==k){
			cout<<"Key Found "<<endl;
			cout<<"Position is : "<<i+1<<endl; 
			b=false;
			break;
		} 
	}
	if(b) cout<<"Key Not Found"<<endl;
	
}
