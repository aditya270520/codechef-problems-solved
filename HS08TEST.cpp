#include <iostream>
using namespace std;
int main()
{
	int amt;
	float bal;
	cin>>amt>>bal;
	if(amt%5==0 && amt<=bal-0.50)
  {
	    bal-=(amt+0.50);
	}
	cout<<bal;
	return 0;
}
