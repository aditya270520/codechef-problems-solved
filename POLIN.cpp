#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int TESTCASE;
	    cin>>TESTCASE;
	    while(TESTCASE--){
	        int n,i;
            cin>>n;
            int a[n],b[n];
            for(i=0;i<n;i++){
                cin>>a[i]>>b[i];
            }
            sort(a,a+n);
            sort(b,b+n);
            int r=0,r1=0;
            for(i=0;i<n;i++){
                while(i<n-1&&a[i]==a[i+1]){i++;}
                r++;
            }
            for(i=0;i<n;i++){
                while(i<n-1&&b[i]==b[i+1]){i++;}
                r1++;
            }
            cout<<r+r1<<endl;
	        
	    }
	    
	return 0;
}
