#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
  int smallestSumSubarray(vector<int>& a){
      int small=INT_MAX;
       int curr = 0;
       
       for(int i = 0;i < a.size();i++){
           curr += a[i];
           if(curr < small){
               small = curr;
           }
           if(curr > 0){
               curr = 0;
           }
       }
       return small;
  }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        Solution ob;
        
        int ans = ob.smallestSumSubarray(a);
        
        cout<<ans<<endl;
    }
}
