#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 1e6;
bool nums[N + 1];

int stoi(deque<char> &r) {
  int c = 1;
  int ans = 0;
  for (int i = r.size()-1; i >= 0; i--) {
    ans += (r[i]-'0')*c;
    c *= 10;
  }
  return ans;
}

vector<int> genRot(int n) {
  vector<int> rots;
  string sn = to_string(n);
  deque<char> r;
  for (int i = 0; i < sn.size(); i++) {
    r.push_back(sn[i]);
  }
  for (int i = 0; i < r.size(); i++) {
    rots.push_back(stoi(r));
    char tmp = r[r.size()-1];
    r.pop_back();
    r.push_front(tmp);
  }
  return rots;
}

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int n = 1e6;

  memset(nums, true, sizeof(nums));

  for (int i = 2; i*i <= n; i++) {
    if (nums[i]) {
      for (int j = i*i; j <= n; j += i) {
        nums[j] = false;
      }
    }
  }
  // nums[i] == 1 iff isPrime(i)
  int ans = 0;
  for (int i = 2; i < 1000000; i++) {
    bool f = 1;
    if (nums[i]) {
      vector<int> rots = genRot(i);
      for (auto rot : rots) {if (!nums[rot]) f = 0;}
      ans += (f ? 1 : 0);
    }
  }
  cout << ans << "\n";
}
