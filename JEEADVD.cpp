#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int m, x, y, z;
        cin>>m>>x>>y>>z;
        if(m<=x)
        cout<<"CSE"<<endl;
        else if(m>x && m<=y)
        cout<<"ECE"<<endl;
        else if(m>y && m<=z)
        cout<<"Other Branch"<<endl;
        else
        cout<<"Better luck next time"<<endl;
    }
    
	return 0;
}