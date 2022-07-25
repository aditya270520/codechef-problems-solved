#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int x,y,z;
        int adii=0;
        cin>>x>>y>>z;
        if(x<=3){
            cout<<x*y<<endl;
        }else{
            for(int i=0;i<x;i+=3){adii+=z;
        }cout<<x*y+(adii-z)<<endl; }
	    
	}
	return 0;
}
