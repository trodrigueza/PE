#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

unordered_map<char, int> F = {
  {'I', 1},
  {'V', 5},
  {'X', 10},
  {'L', 50},
  {'C', 100},
  {'D', 500},
  {'M', 1000}
};

int rom2int(string s) {
  if (s.size() == 1) return F[s[0]];
  int num = 0;
  for (int i = 0; i < s.size() - 1; i++) {
    if (F[s[i+1]] <= F[s[i]]) num += F[s[i]];
    else num -= F[s[i]];
  }
  num += F[s[s.size()-1]];
  return num;
}

string int2rom(int i) {
  string s = "";

  while (i >= 1000) {
    i -= 1000;
    s += 'M';
  }

  if (i >= 900) {
    i -= 900;
    s += "CM";
  }

  if (i >= 800) {
    i -= 800;
    s += "DCCC";
  }

  if (i >= 700) {
    i -= 700;
    s += "DCC";
  }

  if (i >= 600) {
    i -= 600;
    s += "DC";
  }

  if (i >= 500) {
    i -= 500;
    s += 'D';
  }

  if (i >= 400) {
    i -= 400;
    s += "CD";
  }

  while (i >= 100) {
    i -= 100;
    s += 'C';
  }

  if (i >= 90) {
    i -= 90;
    s += "XC";
  }

  if (i >= 80) {
    i -= 80;
    s += "LXXX";
  }

  if (i >= 70) {
    i -= 70;
    s += "LXX";
  }

  if (i >= 60) {
    i -= 60;
    s += "LX";
  }

  if (i >= 50) {
    i -= 50;
    s += 'L';
  }

  if (i >= 40) {
    i -= 40;
    s += "XL";
  }

  while (i >= 10) {
    i -= 10;
    s += 'X';
  }

  if (i >= 9) {
    i -= 9;
    s += "IX";
  }

  if (i >= 8) {
    i -= 8;
    s += "VIII";
  }

  if (i >= 7) {
    i -= 7;
    s += "VII";
  }

  if (i >= 6) {
    i -= 6;
    s += "VI";
  }

  if (i >= 5) {
    i -= 5;
    s += 'V';
  }

  if (i >= 4) {
    i -= 4;
    s += "IV";
  }

  while (i >= 1) {
    i -= 1;
    s += 'I';
  }

  return s;
}

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int l1 = 0, l2 = 0;
  for (int i = 0; i < 1000; i++) {
    string s; cin >> s;
    l1 += (int)s.size();
    l2 += (int)int2rom(rom2int(s)).size();
  }

  cout << l1 - l2 << "\n";
}
