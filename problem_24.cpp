#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  string s = "0123456789";
  int n = 0;

  while (n < 1e6-1) {
    next_permutation(s.begin(), s.end());
    n++;
  }
  cout << s << "\n";
}
