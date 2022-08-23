#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin>>testcase;
    while(testcase--) {
        int A,B,C;
       float D,E,F;
       cin>>A>>B>>C;
       
       D=(A+B)/2;
       E=(C+B)/2;
       F=(A+C)/2;
       
       if(D >=35 && E >= 35 && F >=35)
       {
           cout<<"PASS"<<endl;
       }
       else
       {
           cout<<"FAIL"<<endl;
       }
        
    }
    return 0;
}
