#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int arr[4];
	    
        for(int j=0;j<4;j++){
        cin>>arr[j];
    }
    
    int adii=max(arr[0],arr[1]);
    int adi=max(arr[2],arr[3]);
    cout<<adii+adi<<endl;
	    
	}
	return 0;
}