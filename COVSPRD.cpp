#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t,n,d;
	cin>>t;
	while(t--)
	{
	    cin>>n>>d;
	    if(d<=10)
	    {
	        int result=pow(2,d);
	        if (result<=n)
	        {
	            cout<<result<<endl;
	        }
	        else
	        cout<<n<<endl;
	    }
	    else if(d>10 && d<=20)
	    {
	        long long int sum=1024*pow(3,(d-10));
	        if(sum<=n)
	        {
	            cout<<sum<<endl;
	        }
	        else
	        cout<<n<<endl;
	    }
	    else
	    cout<<n<<endl;
	}
	return 0;
}
