#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int num;
	    cin>>num;
	        int c =0;
	        
	        c += num/100;
	        num = num%100;
	        
	        c += num/50;
	        num = num %50;
	        
	        c += num/10;
	        num = num%10;
	        
	        c += num/5;
	        num = num % 5;
	        
	        c += num/2;
	        num = num%2;
	        
	        c += num/1;
	        
	        
	        cout<<c<<endl;
	    
	}
	return 0;
}
