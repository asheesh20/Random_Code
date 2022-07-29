#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t largestrowsum(int [][3],int ,int );
int32_t main(){
	int a[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	cout<<largestrowsum(a,3,3);
}
int32_t largestrowsum(int a[][3],int i,int j){
	int s,maxi=INT_MIN,ans=-1;
	for(int i=0;i<3;i++){
		s=0;
		for(int j=0;j<3;j++){
			s+=a[i][j];
		}
		if(s>maxi){
			maxi=s;
			ans=i;
		}
	}
	return ans;
}