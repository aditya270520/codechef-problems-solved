#include <bits/stdc++.h>
#define int long long
using namespace std;
int N,X,A;

signed main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase ;
    cin >> testcase;
    while(testcase--){
        cin >> N;
        map<int,int> t;
        A=0;
        for(int i=1;i<=N;++i) {
            cin >> X;
         t[X]++;
        }
    for(auto i:t) 
    A=max(A,i.second);
    if(A>(N+1)/2) 
    puts("No");
    else 
    puts("Yes");
        
    }
	return 0;
}
