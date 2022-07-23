/*
If Yes Print 1
else Print 0
*/
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t palindrome(string s);
int32_t main(){
	string s;
	cin>>s;
	cout<<palindrome(s);
}
int32_t palindrome(string s){
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-1-i]) return 0;
	}
	return 1;
}