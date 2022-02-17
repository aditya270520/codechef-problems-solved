#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n;
	    cin>>n;
        int sum=0;
        int a[n*2];
        for(int i=0;i<n*2;i++){
        
            cin>>a[i];
            sum+=a[i];
    }
    (sum%2==0)?cout<<"YES"<<endl : cout<<"NO"<<endl;
	}
	return 0;
}
