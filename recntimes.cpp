#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void fun(int i,int n,string s){
	if(i>n) return ;
	cout<<s<<endl;
	fun(i+1,n,s);
}
int32_t main(){
	int n;
	cin>>n;
	cin.ignore();
	string s;
	getline(cin,s);
	fun(1,n,s);
}