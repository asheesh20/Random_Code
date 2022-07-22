#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    char getMaxOccuringChar(string str)
    {
        int a[26]={0},num;
        for(int i=0;i<str.size();i++){
            num=0;
            if(str[i]>=65&&str[i]<=90) num=str[i]-'A';
            if(str[i]>=97&&str[i]<=122) num=str[i]-'a';
            a[num]++;
        }
        int ma=-1,ans=0;
        for(int i=0;i<26;i++){
            if(ma<a[i]){
                ans=i;
                ma=a[i];
            }
        }
        char final ='a'+ans;
        return final;
    }

};
int main()
{ 
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
