#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  vector<vector<int>> a(20, vector<int>(20));
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 20; j++) {
      cin >> a[i][j];
    }
  }

  int MAX = 1;
  // down
  for (int i = 0; i+3 < 20; i++) {
    for (int j = 0; j < 20; j++) {
      int cur = 1;
      for (int k = 0; k < 4; k++) {
        cur *= a[i+k][j];
      }
      MAX = max(MAX, cur);
    }
  }
  // right
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j+3 < 20; j++) {
      int cur = 1;
      for (int k = 0; k < 4; k++) {
        cur *= a[i][j+k];
      }
      MAX = max(MAX, cur);
    }
  }
  // diag neg
  for (int i = 0; i+3 < 20; i++) {
    for (int j = 0; j+3 < 20; j++) {
      int cur = 1;
      for (int k = 0; k < 4; k++) {
        cur *= a[i+k][j+k];
      }
      MAX = max(MAX, cur);
    }
  }
  // diag pos
  for (int i = 0; i+3 < 20; i++) {
    for (int j = 0; j < 20; j++) {
      int cur = 1;
      if (j-3 < 0) continue;
      for (int k = 0; k < 4; k++) {
        cur *= a[i+k][j-k];
      }
      MAX = max(MAX, cur);
    }
  }
  cout << MAX << "\n";
}
