#include <iostream>
using namespace std;
class Solution{
  public:
    void swapElements(int arr[], int sizeof_array){
        
       for(int i=0;i<sizeof_array;i++){
           if(i+2<sizeof_array){
               swap(arr[i],arr[i+2]);
           }
       }
        
    }
};
int main() {	
	int testcase;
	cin >> testcase;
	while(testcase--){
	    int sizeof_array;
	    cin >> sizeof_array;
	    int arr[sizeof_array];
	    for(int i = 0;i<sizeof_array;i++){
	        cin >> arr[i];
	    }
        Solution obj;
	    obj.swapElements(arr, sizeof_array);
	  
	    for(int i = 0;i<sizeof_array;i++){
            cout << arr[i] << " ";
        }
	    
	    cout << endl;
	}
	
	return 0;
}
