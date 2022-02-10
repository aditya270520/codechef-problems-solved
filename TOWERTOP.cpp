#include <bits/stdc++.h>
using namespace std;
#define ll long long


void ooo(){
  long long x,m;  
  cin>>x>>m;

  
  ll temp = 2;
  ll cnt  = 0;
  while(temp<=x){
    temp<<=1;
    cnt++;
  }
  temp/=2;
  long long one = cnt+1;
  
  if(one>m){
    cout<<0<<"\n";return;
  }
  if(temp==x){
    cout<<1 + (m-one)<<"\n";
  }else{
    cout<<(m-one)<<"\n";
  }

}
int main() {
	// your code goes here
	int testcase;
	cin>>testcase;
	while(testcase--){
	    ooo();
	}
	return 0;
}
