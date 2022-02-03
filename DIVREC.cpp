#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int TESTCASE = 1;
	cin>>TESTCASE;
	while(TESTCASE--){
	    int x,a,b;
	    cin>>x>>a>>b;
	     if(x%a==0)
        {
            int p=x/a;
            int d=b*p;
            int sum=0;
            for(int i=1;i<=sqrtl(d);i++)
            {
                if(sum>x)
                break;
                if(d%i==0)
                {
                    sum=sum+i;
                    if(d/i!=i)
                    sum=sum+d/i;
                }
            }
            if(sum!=x)
            {
                cout<<-1<<"\n";
            }
            else
            cout<<d<<"\n";
        }
        else
        cout<<-1<<"\n";
    }
}
