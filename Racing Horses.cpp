#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int *arr=new int[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int x;
	    int y=INT_MAX;
	    for(int i=0;i<n-1;i++)
	    {
	        int x=arr[i+1]-arr[i];
	        y=min(y,x);
	    }
	    cout<<y<<endl;
	}
	return 0;
}
