#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int A;
        int B=0,C=0;
        cin>>A;
        string a;
        for(int i=0;i<A;i++){
            cin>>a;
            if(a=="START38"){ B++;}
            else{C++;} 
        }cout<<B<<" "<<C<<endl;
	    }
	return 0;
}
