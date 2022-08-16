#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        vector<bool> prime(N+1,1);
        prime[0]=prime[1]=0;
        for(int i=2;i<=N;i++){
            if(prime[i]){
                for(int j=2*i;j<=N;j+=i){
                    prime[j]=0;
                }
            }
        }
        vector<int> ans;
        for(int i=M;i<=N;i++){
            if(prime[i]) ans.push_back(i);
        }
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
