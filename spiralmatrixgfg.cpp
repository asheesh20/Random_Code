#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
      vector<int> ans;
      int row=n;
      int col=m;
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
       return ans[k-1];
    }
};
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,m;
        int k=0;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
