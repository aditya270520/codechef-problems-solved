#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
    int XQ=x1+y1;
    int YQ=x2+y2;
    cout<<min(XQ,YQ)<<endl;
	}
	return 0;
}
