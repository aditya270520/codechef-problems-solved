#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x >= y)
            cout << "PIZZA\n";
        else if (x >= z)
            cout << "BURGER\n";
        else
            cout << "NOTHING\n";
    }
    return 0;
}