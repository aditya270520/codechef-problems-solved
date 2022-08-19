#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

#define loop(i, a, b) for (int i = a; i <= b; i++)
#define ss second
#define ff first


int count(string s, char a)
{
    int adii = 0;
    for (auto i : s)
    {
        if (i == a)
        {
            adii++;
        }
    }
    return adii;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n, k;
        string s;
        cin >> n >> k >> s;
    
        map<char, int> ad;
    
        ad['1'] = count(all(s), '1');
        ad['0'] = count(all(s), '0');
    
        int ii = max(ad['0'], ad['1']) - min(ad['0'], ad['1']);
    
        int ab = 0;
        if (ii % k)
        {
            ab++;
        }
    
        ii /= k;
        ii += ab;
    
        cout << ii << endl;
	        
	}
	return 0;
}