#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countPrimes(int L, int R) {
        int c=0;
        vector<bool> prime(R+1,1);
        prime[0]=prime[1]=0;
        for(int i=2;i*i<=R;i++){
            if(prime[i]){
                for(int j=2*i;j<=R;j+=i){
                    prime[j]=0;
                }
            }
        }
        for(int i=L;i<=R;i++){
            if(prime[i]) c++;
        }
        return c;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        Solution ob;
        int ans = ob.countPrimes(L, R);
        cout << ans << "\n";
    }
}
