#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t getlength(char []);
int32_t main(){
	char ch[1000];
	cin>>ch;
	cout<<"Length of String is : "<<getlength(ch)<<endl;
}
/*int32_t getlength(char ch[]){
	int c=0;
	for(int i=0;ch[i]!='\0';i++){
		c++;
	}
	return c;
}*/
int32_t getlength(char ch[]){
	int i=0,c=0;
	while(ch[i]!='\0'){
		c++;
		i++;
	}
	return c;
}