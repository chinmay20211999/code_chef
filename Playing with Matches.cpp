#include <iostream>
using namespace std;

int main() {
      int t;
      cin>>t;
      while(t--){
          int a,b;
          cin>>a>>b;
          int x=0;
          int C = a+b;
	      while(C!=0){
	        if(C%10==5 ||C%10==3 || C%10==2){
	            x = x + 5;
	        }
	        else if(C%10==9 || C%10==6){
	            x  = x + 6;
	        }
	        else if(C%10==1){
	            x = x +2;
	        }
	        else if (C%10 ==4){
	            x = x + 4;
	        }
	        else if(C%10==7){
	            x = x +3;
	        }
	        else if(C%10==8){
	            x = x +7;
	        }
	        else{
	            x = x +6;
	        }
	        C/=10;
	    }
	    cout<<x<<endl;
      }
	return 0;
}