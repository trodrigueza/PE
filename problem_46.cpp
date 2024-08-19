#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 1e8;
bool nums[N + 1];

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int n = 1e8;

  memset(nums, true, sizeof(nums));
  vector<int> primes;
  for (int i = 2; i*i <= n; i++) {
    if (nums[i]) {
      primes.push_back(i);
      for (int j = i*i; j <= n; j += i) {
        nums[j] = false;
      }
    }
  }
  // nums[i] == 1 iff isPrime(i)

  for (int i = 1; i <= n; i++) {
    bool f = 0;
    if (!nums[i] && (i & 1)) {
      for (auto p : primes) {
        if (p > i) break;
        int y = sqrt((i-p)/2);
        if (i == p + 2*y*y) {f = 1; break;}
      }
      if (!f) {cout << i  << "\n"; return 0;}
    }
  }
}
