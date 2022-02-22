#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int testcase;
    cin>>testcase;
    while(testcase--){
        int n,w,i;
        cin>>n>>w;
        int a[n];
        int sum =0;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=n-1;i>=0;i--){
            sum+=a[i];
            if(w<=sum){
                break;
            }
        }
        int answer=i;
        cout<<answer<<endl;
    }
	return 0;
}
