#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

const int MAX_N = 1e6;
/*
ll _sieve_size;
bitset<10000010> bs;
vector<ll> p;

void sieve(ll upperbound) {
  _sieve_size = upperbound+1;
  bs.set();
  bs[0] = bs[1] = 0;
  for (ll i = 2; i < _sieve_size; i++) if (bs[i]) {
    for (ll j = i*i; j < _sieve_size; j += i) bs[j] = 0;
    p.push_back(i);
  }
}

vector<ll> primeFactors(ll N) {
  vector<ll> factors;
  for (int i = 0; (i < (int)p.size()) && (p[i]*p[i] <= N); ++i)
    while (N%p[i] == 0) {
      N /= p[i];
      factors.push_back(p[i]);
    }
  if (N != 1) factors.push_back(N);
  return factors;
}

ll EulerPhi(ll N) {
  ll ans = N;
  for (int i = 0; (i < (int)p.size()) && (p[i]*p[i] <= N); i++) {
    if (N%p[i] == 0) ans -= ans/p[i];
    while (N%p[i] == 0) N /= p[i];
  }
  if (N != 1) ans -= ans/N;
  return ans;
}
*/

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int n = 1e6;

  int EulerPh[MAX_N+10];
  for (int i = 1; i <= MAX_N; ++i) EulerPh[i] = i;
  for (int i = 2; i <= MAX_N; ++i)
    if (EulerPh[i] == i)
      for (int j = i; j <= MAX_N; j += i)
        EulerPh[j] = (EulerPh[j]/i) * (i-1);

  ld max = 0;
  int ans;
  for (ll i = 2; i <= n; i++) {
    double cur = (ld)((ld)i / (ld)EulerPh[i]);
    if (cur > max) {
      max = cur;
      ans = i;
    }
  }
  cout << ans << "\n";
  #ifdef ONPC
  cerr << endl << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
  #endif
}
