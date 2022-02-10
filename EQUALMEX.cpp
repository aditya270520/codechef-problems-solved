#include <bits/stdc++.h>
using namespace std;

void equimax();

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    equimax();
        cout<<"\n";
	}
	
	return 0;
}
void equimax(){
 int n;cin>>n;

 map<int,int> m;

 for(int i=0;i<2*n;i++){
  int x;cin>>x;
  m[x]++;
 }

 bool f = true;

 for(int i=0;i<2*n;i++){
  if(m[i] == 1){
   f = false;
   break;
  }
  else if(m[i] == 0) break;
 }


 if(f) cout<<"YES";
 else cout<<"NO";

}