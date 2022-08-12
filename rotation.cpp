#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int i=0;
	    while(i<n-1 && arr[i]<arr[i+1]){
	        i++;
	    }
	    if(i==n-1) return 0;
	    return (i+1);
	 }

};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}