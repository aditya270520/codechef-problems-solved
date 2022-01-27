#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int TESTCASE = 1;
	cin>>TESTCASE;
	while(TESTCASE--){
	    int x,n,k,c=0;
	    cin>>x>>n>>k;
	    if(k>n){
	        cout<<"-1"<<endl;
	       
	    }
	    else{
	        c=0;
	        for(int i=0;i<x;i++){
	            if(c == k){
	                c=0;
	            }
	            cout<<c<<endl;
	            c++;
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
