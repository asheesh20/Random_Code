#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    }
      return 0;
}
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  vector<int> ans;
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          int element=mat[i][j];
          ans.push_back(element);
      }
  }
  sort(ans.begin(),ans.end());
  return ans[k-1];
}
