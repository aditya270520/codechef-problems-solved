#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int  testcase ;
    cin >> testcase;
    while(testcase--){
        int A,B;
        cin>>A>>B;
     
        if(A==B) 
        cout<<"Yes"<<endl;
        else if(abs(A-B)%2 == 0) 
        cout<<"Yes"<<endl;
        else 
        cout<<"No"<<endl;
    }
	return 0;
}
