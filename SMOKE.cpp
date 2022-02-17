#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int TESTCASE;
	cin>>TESTCASE;
	while(TESTCASE--){
	    int n,x,y;
	    cin>>n>>x>>y;
    int m=100006;
    for(int i=0;i<=n;i++)
    {for(int j=0;j<=n;j++)
    {
            int k=100*j+4*i;
            (k>=n)? m=min(m,i*y+j*x):0;}}
    cout<<m<<endl;
	}
	return 0;
}
