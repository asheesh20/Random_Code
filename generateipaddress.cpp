#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
   vector<string>all;
  void gen(string&s,string curStr, int i, int part){
      if(part>4 || (i>s.length() && part==4))return;
      if(part==4 && i==s.size()){
          all.push_back(curStr.substr(0,curStr.length()-1));
          return;
      }
      int j=i;
      string next = "";
      while(j<s.length() && j<i+3){
          next += s[j];
          if(stoi(next)<256 && (s[i]!='0' || j==i)){
              gen(s,curStr+next+".",j+1,part+1);
          }
          j++;
      }
  }
  vector<string> genIp(string &s) {
      if(s.length()<4 || s.length()>12)return {};
      string t ="";
      gen(s,t,0,0);
      return all;
  }
};
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        Solution obj;
        vector<string> str = obj.genIp(s);
        sort(str.begin(), str.end());
        if(str.size()==0)
            cout << -1 << "\n";
        else{
            for (auto &u : str) {
                cout << u << "\n";
            }
        }
    }
}
