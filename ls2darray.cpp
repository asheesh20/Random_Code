#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void linearsearch(int a[][4],int n,int m,int k);
int32_t main(){
	int n,m,k;
	cin>>n>>m>>k;
	int a[3][4];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	linearsearch(a,n,m,k);
}
void linearsearch(int a[][4],int n,int m,int k){
	bool f=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==k){
				cout<<"Element Found at Position "<<i+1<<endl;
				f=0;
				break;
			}
		}
	}
	if(f) cout<<"Element Not Found"<<endl;
}