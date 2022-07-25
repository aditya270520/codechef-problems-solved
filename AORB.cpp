#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin >> testcase;
	while(testcase--){
	    int a,b;
	    cin >>a>>b;
	    int x,X,y,Y;
	    x=500-(a*2);
	    X=1000-(b*4);
	    y=500-((a+b)*2);
	    Y=1000-((b+a)*4);
	    int A=x+Y;
	    int B=X+y;
	    int ans = max(A,B);
	    cout << ans << endl;
	    
	}
	return 0;
}
