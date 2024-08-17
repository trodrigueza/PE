#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int lng(ll i) {
  int cnt = 0;
  while (i) {i /= 10; cnt++;}
  return cnt;
}

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  auto check = [&](vector<ll> &ns) {
    ll f = 0;
    int len = 0;
    for (int i = 0; i < ns.size(); i++) {
      ll tmp = ns[i];
      while (tmp) {f |= (1ll << (tmp % 10)); tmp /= 10;}
    }
    return f == (((1ll << 10) - 1ll) ^ 1ll);
  };

  ll ans = 0;
  for (ll i = 1; i < 10000; i++) {
    vector<ll> cur;
    int len = 0;
    for (ll j = 1; ; j++) {
      ll p = i*j;
      int nlen = lng(p);
      if (len + nlen <= 9) {
        cur.push_back(p);
        len += nlen;
      } else break;
    }
    if (len == 9 && check(cur)) {
      string pal = "";
      for (auto num : cur) pal += to_string(num);
      ans = max(ans, (ll)stoi(pal));
    }
  }
  cout << ans << "\n";
}
