#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
    sort(arr2,arr2+n);
    vector<int> ans;
    for(int i=0;i<m;i++){
        ans.push_back(upper_bound(arr2, arr2+n, arr1[i])-arr2 );
    }
    return ans;
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
        for(int i=0;i<m;i++)
        cin>>arr1[i];
        for(int j=0;j<n;j++)
        cin>>arr2[j];
        Solution obj;
        vector <int> res = obj.countEleLessThanOrEqual(arr1, arr2, m, n);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";      
        cout<<endl;
    }
    return 0;
}