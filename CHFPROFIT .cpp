#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int TESTCASE = 1;
	cin>>TESTCASE;
	while(TESTCASE--){
	    int X, Y, Z, P;
	    cin>>X>>Y>>Z;
	    P=(X*Z)-(X*Y);
	    cout<<P<<endl;
	}
	return 0;
}
