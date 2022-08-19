#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int testcase;
	cin>>testcase;
	while(testcase--){
	    ll a, b, n;
	    cin >> a>> b>> n;
	    
	    if(a%b==0){
	        cout << -1 <<endl;
	        continue;
	    }
	    ll x=n;
	    if (x%a != 0){
	        x=n+a-(x%a);
	    }
	    while(!(x%a==0 && x%b!=0)){
	        x=x+a;
	    }
	    cout << x <<endl;
	}
	return 0;
}