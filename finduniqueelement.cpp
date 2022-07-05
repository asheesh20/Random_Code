// Brute Force Approch

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int i,j,n,c;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){c=0;
		for(j=0;j<n;j++){
			if(i!=j){
				if(a[i]==a[j]) c++;
			}
		}
		if(c==0) cout<<a[i]<<" ";
	}
}



// Optimised Approach

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int i,n,res=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		res=res^a[i];
	}
	cout<<res;
}