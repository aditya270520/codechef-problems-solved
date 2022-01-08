#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int T,T1,T2,R1,R2;
	cin>> T;
	while(T--)
	{
	    cin>>T1>>T2>>R1>>R2;
	    if(pow(T1,2)/pow(R1,3)==pow(T2,2)/pow(R2,3))
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    cout<<"No"<<endl;
	    }
		return 0;
}
