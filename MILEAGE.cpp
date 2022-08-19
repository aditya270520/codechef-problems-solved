#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int N,X,Y,A,B;
        cin>>N>>X>>Y>>A>>B;
        int M=X/A;
        int L=Y/B;
        if(M>L){
            cout<<"DIESEL"<<endl;
        }else if(L>M){
            cout<<"PETROL"<<endl;
        }else{
            float ADII=(float)X/A;
            float ADI=(float)Y/B;
             if(ADII>ADI){
            cout<<"DIESEL"<<endl;
        }else if(ADI>ADII){
            cout<<"PETROL"<<endl;
        }else{
            cout<<"ANY"<<endl;
        }
        }
	    
	}
	return 0;
}