#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 15;
int dp[N][N];

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int n = N-1;
  vector<vector<int>> a(N, vector<int>(N));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= i; j++) {
      cin >> a[i][j];
    }
  }

  memset(dp, 0, sizeof(dp));
  dp[0][0] = a[0][0];
  dp[1][0] = a[1][0] + a[0][0];
  dp[1][1] = a[1][1] + a[0][0];
  for (int i = 2; i < N; i++) {
    dp[i][0] = a[i][0] + dp[i-1][0];
    dp[i][i] = a[i][i] + dp[i-1][i-1];
  }
  for (int i = 2; i < N; i++) {
    for (int j = 1; j < i; j++) {
      dp[i][j] = a[i][j] + max(dp[i-1][j-1], dp[i-1][j]);
    }
  }
  int ans = 0;
  for (int i = 0; i < N; i++) {
      ans = max(dp[n][i], ans);
  }
  cout << ans << "\n";
}
