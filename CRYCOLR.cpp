#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int arr[10][10];
	    
	    for(int i=0;i<3;i++)
	    {    
	        for(int j=0;j<3;j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	     int sum = arr[2][0]+arr[2][1]+arr[1][0];
	     int sum2 = arr[0][1]+arr[0][2]+arr[1][2];
	
	     if(arr[1][1]==n &&arr[0][0]==n && arr[2][2]==n)
	    {
	          cout<<"0"<<endl;
        }
       	else
       	cout<<max(sum,sum2)<<endl;
	
	}return 0;
}
