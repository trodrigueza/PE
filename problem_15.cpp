#include <bits/stdc++.h>

using namespace std;
typedef __uint128_t ll;
typedef pair<int, int> pii;

vector<int> dx = {1, 0};
vector<int> dy = {0, 1};

ll fact(int n) {
  ll ans = 1;
  for (int i = 1; i <= n; i++) {
    ans *= i;
  }
  return ans;
}

int print_uint128(__uint128_t n) {
  if (n == 0)  return printf("0\n");

  char str[40] = {0}; // log10(1 << 128) + '\0'
  char *s = str + sizeof(str) - 1; // start at the end
  while (n != 0) {
    if (s == str) return -1; // never happens

    *--s = "0123456789"[n % 10]; // save last digit
    n /= 10;                     // drop it
  }
  return printf("%s\n", s);
}

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  const int n = 20;
  /*
  ll dp[n+1][n+1];

  for (int i = 0; i <= n; i++)
    dp[0][i] = 1;
  for (int i = 0; i <= n; i++)
    dp[i][0] = 1;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      dp[i][j] = dp[i-1][j] + dp[i][j-1];
    }
  }
  cout << dp[n][n] << "\n";
  */
  ll ans = 1;
  for (int i = n; i <= 2*n-2; i++) {
    ans *= i;
  }

  ll f = fact(n-1);
  ans /= f;
  print_uint128(ans);
}
