#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n,h=1;
	    cin>>n;
	    
	    while( h*(h+1) /2 <= n) h++;
	    cout<<h-1<<endl;
	    
	}
	return 0;
}