#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int x,y;
	    cin >> x >> y;
	    cout << max(x,y)-((x+y)/2)<< endl;
	    
	}
	return 0;
}