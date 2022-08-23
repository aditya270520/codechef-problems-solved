#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds,order_of_key;
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
    ll
    BELL(ll a, ll b)
{
    ll result = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            result = (result * a * 1LL);
        }
        a = (1LL * a * a);
        b = b >> 1;
    }
    return result;
}
ll mod = 1e9 + 7;
vector<vector<int>> aditya;
vector<int> visual;
vector<int> value;
void dfs(int node, int val)
{
    visual[node] = 1;
    int start = val;
    if (node == 1)
    {
        start = val - 1;
    }
    else
        start = val - 2;
    for (auto it : aditya[node])
    {
        if (visual[it] == 0)
        {
            value[it] = start;
            
            dfs(it, val);
            start--;
        }
    }
    return;
}
void problem()
{

    int n, k;
    cin >> n >> k;
    aditya.assign(n + 1, {});
    visual.assign(n + 1, 0);
    value.assign(n + 1, 1);
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        aditya[x].push_back(y);
        aditya[y].push_back(x);
    }
    value[1] = k;
    for (int i = 1; i <= n; i++)
    {
        if (visual[i] == 0)
        {
            dfs(i, k);
        }
    }
    ll answer = 1;
    for (int i = 1; i <= n; i++)
    {
        answer *= value[i];
        answer %= mod;
    }
    cout << answer << endl;
}

int main()
{
    // your code goes here
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll t = 1;
    
    ll counter = 1;
    while (t--)
    {

        problem();
        counter++;
    }
}
