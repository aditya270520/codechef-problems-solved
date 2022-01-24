#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int TESTCASE = 1;
	cin>>TESTCASE;
	while(TESTCASE--){
	int N ,A ,X ,Y;
	cin>>N>>A;
	
	Y=N-A;
	 if(Y<A){
		cout<< Y <<endl;
	} else{
		cout<< A <<endl;
	}
	}
	return 0;
}
