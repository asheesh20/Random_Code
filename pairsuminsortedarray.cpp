#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        int c=0;
        int i=0,j=n-1;
        while(i<j){
            if(arr[i]+arr[j]==sum) {c++;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]<sum) i++;
        else j--;
    }
    if(c) return c;
    return -1;
    }
};
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {      
        int n;
        cin>>n;
        int arr[n+1];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int sum;
        cin>>sum;
        Solution obj;
        cout << obj.Countpair(arr, n, sum) << endl;
        
    }
    return 0;
}
  