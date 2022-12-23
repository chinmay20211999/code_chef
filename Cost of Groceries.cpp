#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a[100],b[100];
	    int i,n,x,sum=0;
	    cin>>n>>x;
	    for( i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	     for( i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	     for(i=0;i<n;i++)
	    {
	       if(a[i]>=x)
	       sum=sum+b[i];
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;
}
