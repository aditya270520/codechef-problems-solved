#include<bits/stdc++.h>
using namespace std;

int ooo(){
    int x,y;
    cin>>x>>y;
    (x>y)?cout<<"CAR"<<endl : (x==y)? cout<<"SAME"<<endl : cout<<"BIKE"<<endl;
    return 0;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        ooo();
    }
}