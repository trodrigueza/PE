#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  // i % 8 == 0 iff i is monday
  // i % 8 == 7 iff i is sunday

  int Md[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int ans = 0, day = 0;
  for (int A = 1900; A < 2001; A++) {
    if (A % 100 == 0 && A % 400 == 0) Md[1] = 29;
    else if (A % 4 == 0) Md[1] = 29;
    for (int M = 1; M <= 12; M++) {
      for (int D = 1; D <= Md[M-1]; D++) {
        if (A > 1900 && D == 1 && day % 7 == 6) ans++;
        day++;
      }
    }
    if (Md[1] == 29) Md[1] = 28;
  }
  cout << ans << "\n";
}
