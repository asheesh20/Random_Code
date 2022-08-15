#include <bits/stdc++.h>
using namespace std;
class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        vector<int> ans;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int element=matrix[i][j];
                ans.push_back(element);
            }
        }
        sort(ans.begin(),ans.end());
        int size=ans.size();
        int start=0;
        int end=size-1;
        int mid=start+(end-start)/2;
        return ans[mid];
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}
