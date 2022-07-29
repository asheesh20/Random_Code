#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void sum(int a[][3],int n,int m);
int32_t main(){
	int a[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	sum(a,3,3);
}
void sum(int a[][3],int n,int m){
int s=0;
	for(int i=0;i<3;i++){s=0;
		for(int j=0;j<3;j++){
			s+=a[i][j];
		}
		cout<<s<<endl;
	}	
}
