#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin >> testcase;
	while(testcase--){
	    int i,n,j,x,y;cin>>x>>y;
        j=0;
        if(x==y){cout<<0<<endl;}
        else{
            for(i=0;i<y;i++){
                x=x+8;j++;
                if(x>=y){break;}
            }cout<<j<<endl;}
    
	    }
	return 0;
}
