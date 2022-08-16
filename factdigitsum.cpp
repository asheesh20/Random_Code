#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
	vector<int> FactDigit(int N)
	{
	vector<int>ans;
    int arr[10]={1,1,2,6,24,120,720,5040, 40320, 362880};
    int i=9;
    while(N>0){
        if(N<arr[i]){
            i--;
        }
        else{       
            ans.insert(ans.begin(), i);
            N-=arr[i];
        }
    }
    return ans;
	}
};
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.FactDigit(N);
		for(auto i: ans)
			cout << i;
		cout << "\n";
	}  
	return 0;
}