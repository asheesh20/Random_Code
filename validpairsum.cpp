#include <bits/stdc++.h> 
using namespace std; 
class Solution{
    public:
    long long ValidPair(int a[], int n) 
    { 
        sort(a,a+n);
        long long int start=0,end=n-1,c=0;
        while(start<end){
            if(a[start]+a[end]>0){
                c+=end-start;
                end--;
            }
            else start++;
        }
        return c;
    }   
};
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int array[n];
		for (int i = 0; i < n; ++i)
			cin>>array[i];
	    Solution obj;
		cout << obj.ValidPair(array, n) <<"\n";
	}
	return 0; 
} 