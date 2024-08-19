#include <bits/stdc++.h>

using namespace std;
#define int long long

const int N = 1e7;

int dp[N];
int ans = 0;

void chain(int i) {
  vector<int> cur = {i};
  while (i != 89ll && i != 1ll) {
    int tmp = i, nw = 0ll;
    while (tmp) {
      int ld = tmp % 10ll;
      nw += ld*ld;
      tmp /= 10ll;
    }
    i = nw;
    cur.push_back(i);
  }
  for (auto &num : cur)
    if (num < N) dp[num] = i;
}

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  memset(dp, -1, sizeof(dp));
  dp[1] = 1; dp[89] = 89;
  int n = 1e7;
  for (int i = 1; i < n; i++) {
    if (dp[i] != -1) continue;
    chain(i);
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (dp[i] == 89) ans++;
  }
  cout << ans << "\n";
}
