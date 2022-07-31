#include<bits/stdc++.h> 
using namespace std; 
class Solution
{
public:
    vector<int> uniqueNumbers(int L,int R)
    {
      vector<int> v;
      for(int i=L;i<=R;i++){
          string s=to_string(i);
          set<int> set1(s.begin(),s.end());
          if(s.size()==set1.size()){
              v.push_back(i);
          }
      }
      return v;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l,r ;
        cin >> l >> r;
		Solution ob;
		vector<int> numbers = ob.uniqueNumbers(l,r);
		
		for(int num : numbers){
		   cout<<num<<" ";
		}
		cout<<endl;
        
    }
    return 0;
}