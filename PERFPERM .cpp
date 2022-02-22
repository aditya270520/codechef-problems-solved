#include<bits/stdc++.h>
using namespace std;

//your code goes here
void aditya()
{
    int n, k;
    cin >> n >> k;
        vector<int> vp;
        for (int i = 1; i <= n; i++)vp.push_back(i);
        if (n == 1){cout << 1 << endl;return;}
        if (k == n - 1){swap(vp[0], vp[1]);
            for (auto x : vp)
            {
                cout << x << " ";
            }
            cout << endl;return;
        }
        int sw = 0;
        k = n - k;
        while (k--){swap(vp[sw], vp[sw + 1]);sw++;}
        for (auto x : vp){cout << x << " ";}
        cout << endl;
}

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        aditya();
    }
}