#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string findSum(string X, string Y) {
       string ans="";
       reverse(X.begin(),X.end());
       reverse(Y.begin(),Y.end());
       long long i=0,j=0;
       long long sum=0;
       long long carry=0;
       while(i<X.length() || j<Y.length())
       {
           sum=carry+(i<X.length()?(X[i]-'0'):0)+(j<Y.length()?(Y[j]-'0'):0);
           ans+=((sum%10)+'0');
           carry=sum/10;
           i++;
           j++;
       }
       if(carry!=0)
       {
           ans+=(carry+'0');
       }
       reverse(ans.begin(),ans.end());
       int k=0;
       for(;k<ans.length();k++)
       {
           if(ans[k]!='0')
               break;
       }
       if(k==ans.length())
           return "0";
       return ans.substr(k);    
   }
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}