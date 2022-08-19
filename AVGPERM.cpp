#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int N;
        cin>> N;
        if(N==3){
            cout<<1<<" "<<2<<" "<<3<<" "<<"\n";
        }
        else{
            cout<<N<<" "<<N-2<<" ";
            for(int i =1;i<=N-3;i++){
                cout<<i<<" ";
            }
            cout<<N-1<<" "<< "\n";
        }
      
       
	}
	return 0;
}