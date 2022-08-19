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
	    cin>>n;
	    ll a[n];
	    for(int i=0; i<n;i++){
	        cin>>a[i];
	    }
	    ll index= -1,ele= -1;
	    for(int i=0; i<n-1;i++){
	        if(a[i]>a[i+1]){
	            index = i+1;
	            ele = a[index];
	            break;
	        }
	    }
	    if(index ==-1 || index ==n-1){
	        cout << "Yes" << endl;
	        continue;
	    }
	    ll lmx;
	    for(int i=0;i<index;i++){
	        if(a[i]>ele){
	            lmx=a[i];
	            break;
	        }
	        
	    }
	    ll rmx=a[index-1];
	    int i;
	    for(i=index+1; i<n; i++){
	        if(a[i]>=rmx){
	            rmx=a[i];
	        }
	        else if(a[i]<=lmx && a[i]>=ele){
	            ele = a[i];
	        }
	        else{
	            cout << "No" <<endl;
	            break;
	        }
	    }
	    if(i==n)cout <<"Yes"<<endl;
	    
	}
	return 0;
}