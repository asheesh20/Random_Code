#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    int CountPairs (int arr[], int n)
    {
       int one=0,two=0;
       for(int i=0;i<n;i++){
           if(arr[i]==2) two++;
           else if(arr[i]>2) one++;
       }
       return two*one+(one*(one-1))/2;
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
	  int arr[n];
	  for(int i=0;i<n;i++)
	  cin>>arr[i];
	  Solution ob;
	  cout <<ob.CountPairs(arr, n)<<endl;
	}
	return 0;
}