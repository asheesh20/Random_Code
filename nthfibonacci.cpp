#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,i=2,c=1,a=0,b=1;
        cin>>n;
        while(i!=n+1){
                c=a+b;
                a=b;
                b=c;
                i++;
        }
        cout<<c;
}
