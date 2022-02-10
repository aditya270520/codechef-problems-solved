#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        int b=x/2;
        if(y>=b){
            cout<<b<<endl;
        }
        else{
            cout<<y<<endl;
        }
    }
	// your code goes here
	return 0;
}
