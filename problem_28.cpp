#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int n = 1001;
  ll ans = n*n, i = ans;
  ll sp = n-1;

  while (sp) {
    for (int j = 0; j < 4; j++) {
      i -= sp;
      ans += i;
    }
    sp -= 2;
  }
  cout << ans << "\n";
}
