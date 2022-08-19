#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n,s=0; 
	    cin>>n;
    char a[n],arr2[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]!=arr2[i]){
            s++;
        }
    }
    if(s==0){
        cout<<1<<endl;
    }else if(s==1){
        cout<<0<<endl;
    }else if(s%2==0){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }
	    
	}
	return 0;
}