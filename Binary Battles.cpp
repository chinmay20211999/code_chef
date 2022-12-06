#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,a,b;
	
	cin>>t;
	while(t--){
	    cin>>n;
	    cin>>a;
	    cin>>b;
	    int count=0;
	    while(n>=1){
	        n=n/2;
	        count++;
	        if (n==1){
	            break;
	        }
	    }
	    cout<<count*a+(count-1)*b<<endl;
	    
	}
	    
	    
	
	return 0;
}
