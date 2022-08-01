#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
       int arr[100000]={0};
       int c=0;
       for(int i=0;i<n;i++){
           arr[a[i]]=1;
       }
       for(int j=0;j<m;j++){
           if(arr[b[j]]==1){
               arr[b[j]]=0;
               c++;
           }
       }
       return c;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}