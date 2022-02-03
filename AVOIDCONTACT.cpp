#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int TESTCASE = 1;
	cin>>TESTCASE;
	while(TESTCASE--){
	    int x,y;
	    cin>>x>>y;
	    
	    if(x==y){
	        cout<<2*x-1<<endl;
	    }
	    else if(y==0){
	        cout<< x <<endl;
	    }
	    else{
	        cout<< x+y <<endl;
	    }
	}
	return 0;
}