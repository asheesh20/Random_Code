/*
This Question is a variation of Dutch National Flag Algorithm 
3 Pointer Approach :

low=0,mid=0,high=n-1;
while(mid<=high)
mid - 0 - swap(a[low],a[mid]) low++,mid++
mid - 1 - mid++
mid - 2 - swap(a[mid],a[high]) high--

*/


#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int32_t main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int low=0,mid=0,high=n-1;
	while(mid<=high){
		if(a[mid]==0){
			swap(a[low],a[mid]);
			low++;mid++;
		}
		else if(a[mid]==2){
			swap(a[mid],a[high]);
			high--;
		}
		else mid++;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}	
}
