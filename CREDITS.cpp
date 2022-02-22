#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n;
	    cin>>n;
    (n>65)?cout<<"overload"<<endl : (n==65)?cout<<"normal"<<endl : (n<35)?cout<<"underload"<<endl : cout<<"normal"<<endl;
	}
	return 0;
}
