#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b) for (long long i = a; i < b; i++)
#define rf(i, a, b) for (long long i = a; i >= b; i--)
#define ll long long
#define mp make_pair
#define pb push_back
#define vll vector<long long>
#define vvl vector<vll>
#define pll pair<ll, ll>
#define vc vector
#define fi first
#define se second
#define all(x) x.begin(), x.end()
vll aditya_bhushan_sharma;


void Aditya_code(ll n)
{
    for (long long i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            if (n / i == i)
                aditya_bhushan_sharma.pb(i);
            else
                aditya_bhushan_sharma.pb(i), aditya_bhushan_sharma.pb(n / i);
        }
    sort(aditya_bhushan_sharma.begin(), aditya_bhushan_sharma.end());
}


int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int testcase;
	cin>>testcase;
	while(testcase--){
	    ll x, y;
        cin >> x >> y;
        aditya_bhushan_sharma.clear();
        Aditya_code(y);
        bool can = false;
        pll one, two;
        for (auto &i : aditya_bhushan_sharma)
        {
            if (i <= y / i)
            {
                two = {i, y / i};
                one = {x - (i - 1), i - 1};
                if (one.fi <= one.se)
                {
                    can = true;
                    break;
                }
                one = {y / i + 1, x - (y / i + 1)};
                if (one.fi <= one.se)
                {
                    can = true;
                    break;
                }
            }
            else
                break;
        }
        if (can)
            cout << one.fi << " " << one.se << endl
                 << two.fi << " " << two.se << endl;
        else
            cout << -1 << endl;
	    
	}
	return 0;
}