//1st Approch : TLE 
//TC: O(N)
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    int start=0,end=n-1;
	    while(start<=end){
	        if(arr[start]+arr[end]==x) return 1;
	        else end--;
	        if(start==end){
	            end=n-1;
	            start++;
	        }
	    }
	    return 0;
	}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

//2nd Approach : AC
//TC: O(NlogN)

#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    sort(arr,arr+n);
	    int start=0,end=n-1;
	    while(start<end){
	        if(arr[start]+arr[end]==x) return 1;
	        else if(arr[start]+arr[end]>x) end--;
	        else start++;
	    }
	    return 0;
	}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}