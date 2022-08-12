#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        vector<int> ans;
        int row=R;
        int col=C;
        int c=0;
        int total=row*col;
                int startingRow=0;
        int endingRow=row-1;
        int startingCol=0;
        int endingCol=col-1;
        while(c<total){
            for(int i=startingCol;c<total&&i<=endingCol;i++){
                ans.push_back(a[startingRow][i]);
                c++;
            }
                startingRow++;
            for(int i=startingRow;c<total && i<=endingRow;i++){
                ans.push_back(a[i][endingCol]);
                c++;
            }
                endingCol--;
            for(int i=endingCol;c<total&&i>=startingCol;i--){
                ans.push_back(a[endingRow][i]);
                c++;
            }
                endingRow--;
            for(int i=endingRow;c<total&&i>=startingRow;i--){
                ans.push_back(a[i][startingCol]);
                c++;
            }
                startingCol++;
        }
        reverse(ans.begin(),ans.end());
        return ans;
            
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}