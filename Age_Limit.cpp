#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,a;
	cin>>t;
	while(t--){
	    cin>>x;
	    cin>>y;
	    cin>>a;
	    if(a>=x and a<y){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
