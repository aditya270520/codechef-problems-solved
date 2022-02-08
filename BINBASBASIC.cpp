#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int TESTCASE = 1;
	cin>>TESTCASE;
	while(TESTCASE--){
	    int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int l=0,h=n-1,mid=0;
        while(l<=h){
            if(s[l]!=s[h]){
                mid++;
            }
            l++;
            h--;
        }
        int r=k-mid;
        if(r>=0&&r%2==0){
            cout<<"YES"<<endl;
        }
        else if(r>=0&&n%2==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
	}
	return 0;
}
