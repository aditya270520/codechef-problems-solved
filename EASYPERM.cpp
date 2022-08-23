#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase ;
    cin >> testcase;
    while(testcase--){
         int N;
        cin >> N;
        for(int i=N;i>=1;--i)
            cout << i << ' ';
        cout << "\n";
        
    }
	return 0;
}
