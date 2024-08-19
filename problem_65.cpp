#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

typedef cpp_int ll;

ll gcd(ll a, ll b) {
  while(b) {
    ll t = b;
    b = a % b;
    a = t;
  }
  return a;
}

struct Fraction {
  ll a;
  ll b;

  Fraction(ll num = 1, ll den = 1) {
    ll divisor = gcd(num, den);
    a = num / divisor;
    b = den / divisor;
  }

  Fraction operator+(const Fraction &other) const {
    ll new_a = a * other.b + other.a * b;
    ll new_b = b * other.b;
    return Fraction(new_a, new_b);
  }

  Fraction operator/(const Fraction &other) const {
    ll new_a = a * other.b;
    ll new_b = b * other.a;
    return Fraction(new_a, new_b);
  }
};

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int n = 99;
  vector<ll> dgs = {1, 2};
  int k = 2;
  while (dgs.size() < 100) {
    dgs.push_back(1);
    dgs.push_back(1);
    dgs.push_back(2*k);
    k++;
  }
  Fraction one(1, 1);
  Fraction two(2, 1);
  Fraction frac(0, 1);
  for (int j = 0; j <= n-1; j++) {
    frac = Fraction(0, 1);
    for (int i = j; i >= 0; i--) { // i = n gives n+2th term
      Fraction curD(dgs[i], 1);
      Fraction cur = frac + curD;
      frac = one / cur;
    }
    frac = frac + two;
    cout << j+2 << " : " << frac.a << "/" << frac.b  << "\n";
  }

  ll sum = 0;
  while (frac.a) {
    sum += (frac.a % (ll)10);
    frac.a /= (ll)10;
  }
  cout << sum;
  cout << "\n";
}
