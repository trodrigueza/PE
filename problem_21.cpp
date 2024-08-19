#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 1e7;
int d[N];

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  memset(d, 0, sizeof(d));
  int n = 1e4;
  for (int i = 2; i < n; i++) {
    for (int j = 1; j < i; j++) {
      if (i % j == 0) d[i] += j;
    }
  }
  int ans = 0;
  for (int i = 1; i < n; i++) {
    if (d[d[i]] == i && d[i] != i) {
      ans += i;
    }
  }
  cout << ans << "\n";
}
