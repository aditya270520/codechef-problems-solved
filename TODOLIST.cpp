#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase ;
    cin >> testcase;
    while(testcase--){
    int N,a;    
    cin >> N;
    int count = 0;
    for(int i=1;i<=N;i++){
        cin >> a; 
        if(a>=1000)
        count++;
    }
    cout << count << "\n";
        
    }
	return 0;
}
