#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin >> t;
	while(t--){
	    cin >> n;
	    int arr[n];
	    int count = 0;
	    for (int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    for(int i = 0;i<n;i++){
	        for (int j = i;j<n-1;j++){
	            if (arr[i]==arr[j+1]){
	                arr[j+1]=0;
	            }
	        }
	    }
	        for (int i = 0;i<n;i++){
	            if (arr[i]!=0){
	                count ++;
	            }
	        }
	        
	    
	    cout << count << endl ;
	}
	return 0;
}