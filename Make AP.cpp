#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,c;
	cin>>t;
	while(t--){
	    cin>>a;
	    cin>>c;
	    if((a+c)%2==0){
	        cout<<(a+c)/2<<endl;
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}
