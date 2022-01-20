#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int TESTCASE = 1;
	cin>>TESTCASE;
	while(TESTCASE--){
	    int A ,B ,C;
	    cin>>A>>B>>C;
	   if(A>50) {
		cout<< "A" <<endl;
	} else if(B>50) {
		cout<< "B" <<endl;
	} else if(C>50) {
		cout<< "C" <<endl;
	} else {
		cout<< "NOTA" <<endl;
	}
	}

	return 0;
}
