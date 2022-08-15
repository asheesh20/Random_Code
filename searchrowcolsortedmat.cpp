#include<bits/stdc++.h> 
using namespace std;
class Solution
{
    public:
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        int i=0,j=m-1;
        while(i<n && j>=0){
            int element =matrix[i][j];
            if(element == x){
                return 1;
            }
            else if(element > x){
                j--;
            }
            else i++;
        }
        return 0;
    }
};
int main() 
{ 
	int t;
    cin>>t;
    while(t--)
    {

 		int n, m;
    	cin>> n>> m;
        vector<vector<int> > matrix(n);
            
        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        int x;
        cin>>x;
        Solution obj;
        if (obj.search(matrix,n,m,x)) 
            cout << "1\n"; 
        else
            cout << "0\n"; 
    }
	return 0; 
} 
