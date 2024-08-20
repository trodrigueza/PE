#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  vector<int> ab;
  vector<bool> abc(29000, 0);
  for (int i = 1; i < 29000; i++) {
    int sum = 0;
    for (int j = 1; j < i; j++) {
      if (i % j == 0) sum += j;
    }
    if (sum > i) {ab.push_back(i); abc[i] = 1;}
  }

  int ans = 0;
  for (int i = 1; i < 29000; i++) {
    bool f = 1;
    for (auto &num : ab) {
      if (i - num < 0) break;
      int num2 = i - num;
      if (abc[num2] && num + num2 == i) {f = 0; break;}
    }
    ans += f ? i : 0;
  }
  cout << ans << "\n";
}
