#include<bits/stdc++.h>
#define ll long long 
using namespace std;
vector<int> reverse(vector<int> v);
void print(vector<int> v);
int32_t main(){
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	vector<int> ans=reverse(v);
	print(ans);
}
vector<int> reverse(vector<int> v){
	int start=0,end=v.size()-1;
	while(start<end){
		swap(v[start],v[end]);
		start++;end--;
	}
	return (v);
}
void print(vector<int> v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
