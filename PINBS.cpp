#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int T = 1;
	cin>>T;
	while (T--)
	{
	    string s;
	    cin>>s;
	    int n = s.length();
	    if(n==1)
	    {
	        cout << "No"<<endl;
	        continue;
	    }
	    int count=0, pos=-1;
	    for(int i = 0; i < n; i++)
	    {
	        if(s[i]=='1')
	        {
	            count++;
	            pos=i+1;
	        }
	    }
	    if(count==0 || (count==1&&pos==n)) cout << "No"<<endl;
	    else cout <<"Yes"<<endl;
	}
	return 0;
}
