#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s=0,l=0;
	    cin>>n;
	    string str;
	    while(n--)
	    {
	        cin>>str;
	        if(str[0]=='S') s++;
	        else l++;
	    }
	    cout<<s<<" "<<l<<endl;
	}
	return 0;
}
