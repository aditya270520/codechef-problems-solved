#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int x, y;
	    cin>> x>>y;
	    if(x>y){
	        cout<<y <<endl;
	       
	    }
	    else {
	        cout << x<< endl;
	    }
	    
	}
	return 0;
}