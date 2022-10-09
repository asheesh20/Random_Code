#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
 bool isprime(int n){
     if(n == 0 || n == 1)
         return 0 ;
     else if(n == 2)
         return 1 ;
     for(int i = 2; i < n; i++){
         if(n % i == 0)
             return 0 ;
     }
     return 1 ;
 }
 int NthTerm(int N){
    if(isprime(N))
     return 0 ;
             int N1,N2 ;
         N1 = N ;
         N2 = N ;
        while(1){
             N1++ ;
             if(isprime(N1))
                 break ;
         }
         while(N2 > 0 && N2--){
             if(isprime(N2))
                 break ;
         }
        int diff1 = N - N1 ;
        int diff2 = (N2 == 0) ? INT_MAX : N - N2 ;
         return min(abs(diff1),abs(diff2)) ;
}
};
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		int ans = obj.NthTerm(N);
		cout << ans << "\n";
	}
	return 0;
}
