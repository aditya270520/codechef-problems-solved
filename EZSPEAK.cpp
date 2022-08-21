#include <bits/stdc++.h>
using namespace std;


int main() {
    // your code goes here
	int t,n;
	string s;
	cin>>t;
	while(t--){
	    int c=0;
	    cin>>n;
	    cin>>s;
	    for(auto i:s){
	        if (i=='a'||i=='e'||i=='i'||i=='o'||i=='u'){
	            c=0;
	        }
	        else{
	            c+=1;
	        }
	        if (c>=4){
	            cout<<"NO"<<endl;
	            break;
	        }
	    }
	    if (c<4)
	    cout<<"YES"<<endl;
	    
	}
	return 0;
}
