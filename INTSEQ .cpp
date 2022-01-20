#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int TESTCASE = 1;
	cin>>TESTCASE;
	while(TESTCASE--){
	    int k;
	    cin>>k;
	    int counter=0;
	    while(k%2==0){
	        k=k/2;
	        counter+=1;
	    }
	    cout<<counter<<endl;
	}
	return 0;
}
