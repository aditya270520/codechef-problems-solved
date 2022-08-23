#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int testcase ;
    cin >> testcase;
    while(testcase--){
        int A,B;
        cin>>A>>B;
     
        if(A%B  == 0){
            if((A/B)%2 == 0)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
	return 0;
}
