#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t getlength(char ch[]);
void reverse_string(char ch[],int n);
int32_t main(){
	char ch[1000];
	cin>>ch;
	int len=getlength(ch);
	reverse_string(ch,len);
	cout<<ch;
}
int32_t getlength(char ch[]){
	int i=0,c=0;
	while(ch[i]!='\0'){
		c++;
		i++;
	}
	return c;
}
void reverse_string(char ch[],int n){
	int start=0,end=n-1;
	while(start<end){
		swap(ch[start++],ch[end--]);
	}
}