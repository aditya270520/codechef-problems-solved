#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;


int solve() {
ll n,k;
cin>>n>>k;
if(n==1&&k==1){
cout<<1<<ln;
}
else{
if(k<2||k>n){
cout<<-1<<ln;
}
else{
int c=0;
for(int i=0;i<k-1;i++){
cout<<(i+1)<<" ";
c=i;
}
for(int i=0;i<n-c-1;i++){
cout<<(n-i)<<" ";
}
cout<<ln;
}
}
}

int main(){
ll t;
cin>>t;
while(t--){
solve();
}
}