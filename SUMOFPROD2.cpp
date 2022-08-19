#include <bits/stdc++.h>

#define MOD 998244353

using namespace std;

long long fac[1000010], inv[1000010], finv[1000010];

long long C (long long X, long long Y) {

  if (X < 0 || Y > X)

    return 0;

  return fac[X] * finv[Y] % MOD * finv[X - Y] % MOD;

}


#define int long long


void solve() {

  int n,X,c0=0,c1=0,t=0;

  cin >> n;

  for(int i=1; i<=n; ++i) {

    cin >> X;

    c0+=X==0;

    c1+=X==1;

  }

  for(int i=0; i<=c1; ++i)

    t=(t+i*C(c1+c0-i,c0))%MOD;

  cout << (((t*(c0+1)-C(c1+c0-2,c0-1))%MOD+MOD)%MOD+C(c1+c0-2,c0-1))*fac[c1]%MOD*fac[c0]%MOD << endl;

}

signed main() {
    
    // your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  fac[0] = inv[0] = inv[1] = finv[0] = finv[1] = 1;

  for (long long i = 1; i <= 1000000; ++i)

    fac[i] = fac[i - 1] * i % MOD;

  for (long long i = 2; i <= 1000000; ++i)

    inv[i] = MOD - MOD / i * inv[MOD % i] % MOD;

  for (long long i = 2; i <= 1000000; ++i)

    finv[i] = finv[i - 1] * inv[i] % MOD;

  int T;

  cin >> T;

  while(T--) solve();

}

