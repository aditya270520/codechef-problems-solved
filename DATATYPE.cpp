#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int TESTCASE;
	cin>>TESTCASE;
	while(TESTCASE--){
	    int n,x;
        cin>>n>>x;
        if(x<=n){
            cout<<x<<endl;
        }
        else{
            while(x>n){
                x=x-n-1;
            }
            cout<<x<<endl;
        }
    }
	
	return 0;
}
