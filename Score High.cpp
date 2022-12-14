#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[4];
	    int sum;
	    for(int i=0;i<4;i++){
	        cin>>arr[i];
	        sum=arr[0];
	    }
	    for(int i=0;i<4;i++){
	        if(arr[i]>sum){
	            sum=arr[i];
	        }
	        
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;
}
