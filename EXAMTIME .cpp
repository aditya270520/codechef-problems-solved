#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int dsa1, toc1, dm1, dsa2, toc2, dm2;
	    cin>>dsa1>>toc1>>dm1;
	    cin>>dsa2>>toc2>>dm2;
	    int total1 = dsa1+toc1+dm1;
	    int total2 = dsa2+toc2+dm2;
	    if(total1>total2){
	        cout<<"Dragon"<<endl;
	    }
	    else if(total1<total2){
	        cout<<"Sloth"<<endl;
	    }
	    else if(total1=total2){
	        if(dsa1>dsa2){
	            cout<<"Dragon"<<endl;
	        }
	        else if (dsa1<dsa2){
	            cout<<"Sloth"<<endl;
	        }
	        else if(dsa1=dsa2)
	        {
	            if(toc1>toc2)
	            {
	                cout<<"Dragon"<<endl;
	            }
	            else if(toc1<toc2)
	            {
	                cout<<"Sloth"<<endl;
	            }
	            else
	            {
	                if(dm1>dm2)
	                {
	                    cout<<"Dragon"<<endl;
	                }
	                else if(dm1<dm2)
	                {
	                    cout<<"Sloth"<<endl;
	                }
	                cout<<"Tie"<<endl;
	            }
	        }
	    }
	}
	return 0;
}
