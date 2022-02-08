#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int TESTCASE = 1;
	cin>>TESTCASE;
	while(TESTCASE--){
	    int n;
	    cin>>n;
        double num = pow(0.143*n,n);
        if((num-floor(num))<0.5){
            cout<<floor(num)<<endl;
        }
        else{
            cout<<floor(num)+1<<endl;
        }
	}
	return 0;
}
