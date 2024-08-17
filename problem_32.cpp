#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  set<int> s;
  for (int a = 1; a < 100; a++) {
    for (int b = 1; b < 5000; b++) {
      int p = a * b;

      int f = 0;
      int tmpa = a, tmpb = b, tmpp = p;
      int len = 0;
      while (tmpa) {f |= (1 << (tmpa % 10)); tmpa /= 10; len++;}
      while (tmpb) {f |= (1 << (tmpb % 10)); tmpb /= 10; len++;}
      while (tmpp) {f |= (1 << (tmpp % 10)); tmpp /= 10; len++;}

      if (len != 9) continue;
      if (f == ((1 << 10) - 1 ^ 1)) s.insert(p);
    }
  }
  cout << accumulate(s.begin(), s.end(), 0) << "\n";
}
