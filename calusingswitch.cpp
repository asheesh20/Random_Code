#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	ll n;
	cin>>n;
	switch(1){
		case 1: cout<<"No. of RS 100 "<<n/100<<endl;
		        n=n%100;
		case 2: cout<<"No. of RS 50 "<<n/50<<endl;
		        n=n%50;
		case 3: cout<<"No. of RS 20 "<<n/20<<endl;
		        n=n%20;
		case 4: cout<<"No. of RS 1 "<<n/1<<endl;
		        break;
	}
}