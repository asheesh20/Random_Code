#include <bits/stdc++.h>
using namespace std;
class Solution{
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
	    set<int> s;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=A &&arr[i]<=B){
	            s.insert(arr[i]);
	        }
	    }
	    if(s.size()==(B-A)+1) return true;
	    return false;
	}	 

};
int main() 
{ 	  
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,A,B;
		cin>>n>>A>>B;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];

        

        Solution ob;
        if (ob.check_elements(a, n, A, B))
			cout << "Yes";
		else
			cout << "No";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}
