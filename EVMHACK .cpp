#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int TESTCASE = 1;
	cin>>TESTCASE;
	while(TESTCASE--){
	    int a,b,c,p,q,r;
	    cin>>a>>b>>c>>p>>q>>r;
	    int x = (p+q+r)/2;
	    if(p+b+c > x or a+q+c > x or a+b+r > x){
	        cout <<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
