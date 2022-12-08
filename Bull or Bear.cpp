#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x;
	    cin>>y;
	    if(x>y){
	        cout<<"LOSS"<<endl;
	    }
	    else if(x==y){
	        cout<<"NEUTRAL"<<endl;
	    }
	    else{
	        cout<<"PROFIT"<<endl;
	    }
	}
	return 0;
}
