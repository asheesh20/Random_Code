#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	int isPalindrome(string S)
	{
	    int f=1;
	    for(int i=0;i<S.size()/2;i++){
	        if(S[i]==S[S.size()-1-i]) f=1;
	        else {
	            f=0;
	            break;
	        }
	    }
	    if(f) return 1;
	    else return 0;
	}
};
int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL); 
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   	    Solution ob;
   		cout << ob.isPalindrome(s) << "\n";
   	}
    return 0;
}