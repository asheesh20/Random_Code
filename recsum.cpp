// Approach 1 : Parameterized

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void fun(int i,int s){
	if(i<1){
		cout<<s;
		return;
	}
	fun(i-1,s+i);
}
int32_t main(){
	int n,s(0);
	cin>>n;
	fun(n,s);
}


// Approach 2 : Functional 

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t fun(int n){
	if(n==1) return 1;
	return n+fun(n-1);
}
int32_t main(){
	int n;
	cin>>n;
	cout<<fun(n);
}