#include <bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    int countPairs(int arr1[], int arr2[],  int m, int n, int x) 
    { 
       int i=0,j=n-1,c=0;
       while(i<m && j>=0){
           if(arr1[i]+arr2[j]==x){
               c++;j--;
           }
           else if(arr1[i]+arr2[j]>x) j--;
           else i++;
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
	    int m,n;
	    cin>>m>>n;
	    int arr1[m],arr2[n];
	    int x ;
	    for(int i=0;i<m;i++)
	        cin>>arr1[i];
	    for(int j=0;j<n;j++)
	        cin>>arr2[j];
	    cin>>x;
	    Solution ob;
	    cout <<ob.countPairs(arr1, arr2, m, n, x)<<endl;
	}
	return 0;	 
}