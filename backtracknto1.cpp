#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void fun(int i,int n){
	if(i>n) return ;
	fun(i+1,n);
	cout<<i<<" ";
}
int32_t main(){
	int n;
	cin>>n;
	fun(1,n);
}