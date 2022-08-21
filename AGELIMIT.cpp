#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int x, y, a;
	    cin>>x>>y>>a;
	    if((a>=x) && (a<y)){
	        cout << "YES" << endl;
	    }
	    else
	        cout << "NO" <<endl;
	    
	    
	}
	return 0;
}