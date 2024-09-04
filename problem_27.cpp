#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 1e8;
bool check[N + 1];

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int n = 1e8;

  vector<int> primes;
  memset(check, true, sizeof(check));
  for (int i = 2; i*i <= n; i++) {
    if (check[i]) {
      primes.push_back(i);
      for (int j = i*i; j <= n; j += i) {
        check[j] = false;
      }
    }
  }

  int count = 0, ans = 0, A, B;
  int i = 0;
  while (primes[i] < 1000) {
    cout << primes[i] << "\n";
    for (int a = -999; a < 1000; a++) {
      n = 0;
      int id = n*n + a*n + primes[i];
      if (id < 0) continue;

      while (check[id]) {
        n++;
        id = n*n + a*n + primes[i];
      }

      if (n > count) {count = n; ans = primes[i]*a; A = a; B = primes[i];}
    }
    i++;
  }

  cout << count << " " << ans << "\n";
  cout << A << " " << B << "\n";
}
