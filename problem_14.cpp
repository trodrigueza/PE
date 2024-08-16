#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

unordered_map<ll, int> dp;

int collatz(ll i) {
  int n = 1;
  while (i != 1) {
    if (dp.find(i) != dp.end()) {
      dp[i] = n + dp[i];
      return n + dp[i];
    }
    if (i%2) i = 3*i+1;
    else i = i/2;
    n++;
  }
  dp[i] = n;
  return n;
}

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  ll ans;
  int max = 1;
  for (ll i = 1; i < (ll)1e6; i++) {
    int n = collatz(i);
    if (n > max) {max = n; ans = i;}
  }
  cout << ans << "\n";
  #ifdef ONPC
  cerr << endl << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
  #endif
}
