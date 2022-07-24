#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    unsigned int getFirstSetBit(int n)
    {
        int i=0,c=0;
        if(n==0) return 0; 
        while(n!=0){
            i++;
            if(n&1) {
                return i;
            }
            n=n>>1;
        }
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
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); 
    }
    return 0;
}
