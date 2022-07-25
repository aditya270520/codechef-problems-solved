#include <bits/stdc++.h>
using namespace std;

int main() {
    int testcase;
    cin>>testcase;
    while(testcase--){
        int n;cin>>n;int arr[n];
        int cot=0;
        for(int i=0;i<n;i++){cin>>arr[i];
        }if(n==1){cout<<1<<endl;}
        else{for(int i=1;i<n;i++){if(arr[i-1]==arr[i]){cot++;}}
        cout<<n-cot<<endl;}
    }
    

	// your code goes here
	return 0;
}
