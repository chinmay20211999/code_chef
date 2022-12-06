#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,r1,r2,r3,r4,r5;
	cin>>t;
	while(t--){
	    cin>>r1;
	    cin>>r2;
	    cin>>r3;
	    if(r1+r2<r3 || r2+r3<r1 ||r3+r1<r2){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
