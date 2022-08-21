#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase ;
    cin >> testcase;
    while(testcase--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i]>k) ans++;
        }
        cout<<ans<<endl;
        
    }
	return 0;
}
