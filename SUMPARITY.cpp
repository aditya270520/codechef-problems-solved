#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int TESTCASE = 1;
	cin>>TESTCASE;
    while(TESTCASE--){
        int N,A;
        cin>>N>>A;
        if(N==1){
            if (A%2==0){
                cout<<"EVEN"<<endl;
            }else{
                cout<<"ODD"<<endl;
            }
            continue;
        }
        if (A%2==1){
            if(N%2==0){
                cout<<"EVEN"<<endl;
            }else{
                cout<<"ODD"<<endl;
            }
        }else{
            cout<<"IMPOSSIBLE"<<endl;
        }
    }
	return 0;
}
