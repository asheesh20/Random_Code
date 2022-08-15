#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	   int c=0,maxi=0,ans=-1;
	   for(int i=0;i<n;i++){c=0;
	       for(int j=0;j<m;j++){
	           if(arr[i][j]==1) c++;
	       }
	       if(c>maxi){
	           maxi=c;
	           ans=i;
	       }
	   }
	   if(ans==-1) return -1;
	   else return ans;
	}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}