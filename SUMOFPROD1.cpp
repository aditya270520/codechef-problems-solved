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
	    int n;
	    cin >> n;
	    ll answer=0;
	    ll count =0;
	    int a[n];
	    for (int i=0;i<n;i++){
	        cin >> a[i];
	        if (a[i]==1) count++;
	        else{
	            answer+=(count*(count+1)/2);
	            count=0;
	        }
	    }
	    answer+=(count*(count+1)/2);
	    cout << answer<<endl;
	    
	}
	return 0;
}