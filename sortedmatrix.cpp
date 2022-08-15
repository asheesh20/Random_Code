#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
       vector<int> ans;
       for(int i=0;i<N;i++){
           for(int j=0;j<N;j++){
               int element=Mat[i][j];
               ans.push_back(element);
           }
       }
       sort(ans.begin(),ans.end());
       for(int i=0;i<N;i++){
           for(int j=0;j<N;j++){
               Mat[i][j]=ans[i*N+j];
           }
       }
       return Mat;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}
