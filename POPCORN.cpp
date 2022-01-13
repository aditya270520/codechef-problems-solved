#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int TESTCASE = 1;
	cin>>TESTCASE;
	while(TESTCASE--){
	    int A1, A2, B1, B2, C1, C2;
	    cin>>A1>>A2>>B1>>B2>>C1>>C2;
	    int A=A1+A2;
	    int B=B1+B2;
	    int C=C1+C2;
	    if(A>=B && A>=C) {
		cout<< A <<endl;
	} else if(B>=A && B>=C) {
		cout<< B <<endl;
	} else {
		cout<< C <<endl;
	}
	}
	return 0;
}
