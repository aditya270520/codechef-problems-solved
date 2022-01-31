#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int TESTCASE = 1;
	cin>>TESTCASE;
	while(TESTCASE--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    int c=1;
	    for(int i=0;i<n;i++){
	        if((b[i]-a[i]!=x)&&(b[i]-a[i]!=y)){
	            c=0;
	            break;
	        }
	    }
	    if(c==0){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
