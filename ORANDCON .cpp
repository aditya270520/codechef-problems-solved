#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int TESTCASE = 1;
	cin>>TESTCASE;
	while(TESTCASE--){
	    int x;
	    cin>>x;
	    int a = x,b = 0,c = x;
	    for(int i=0;i<31;i++) {
        if(!(c&((int)1<<i))) {
            c = c | ((int)1<<i);
            break;
        }
    }
    cout<<a<<" "<<b<<" "<<c<<"\n";
	}
	return 0;
}
