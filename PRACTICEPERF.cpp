#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int ans = 0;
	int a;
	for(int i=1;i<=4;i++)
	{
	    cin>>a;
	    if(a>=10)
	        ans++;
	}
	
	cout<<ans<<"\n";
	
	return 0;
}
