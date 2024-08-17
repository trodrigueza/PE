#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  vector<vector<int>> a(4, vector<int>(4));
  int N = 10;
  ll cnt = 0;

  /*
  for (int a = 0; a < n; a++)
    for (int b = 0; b < n; b++)
      for (int c = 0; c < n; c++)
        for (int d = 0; d < n; d++)
          for (int e = 0; e < n; e++)
            for (int f = 0; f < n; f++)
              if (((2*(b+c+e)+a+d+f) % 3) == 0) cnt++;
  */
  /*
  for (int e = 0; e < n; e++)
    for (int x = 0; x < 37; x++)
      for (int y = 0; y < 37; y++)
        if (!((4*e + 3*x + 2*y) & 7)) cnt += 65536ll;
  */
  /*
  for (int a = 0; a < n; a++) {
    for (int e = 0; e < n; e++) {
      for (int i = 0; i < n; i++) {
        for (int c = 0; c < n; c++) {
          int k = a+e+i;
          int g = k-c-e;
          int b = k-a-c;
          int h = k-i-g;
          int f = k-i-c;
          int d = k-a-g;
          if (g < 0 || g > 9 || b < 0 || b > 9 || h < 0 || h > 9 || f < 0 || f > 9 || d < 0 || d > 9) continue;
          int A = a+e+i;
          int B = c+e+g;
          int C = a+b+c;
          int D = d+e+f;
          int E = g+h+i;
          int F = a+d+g;
          int G = b+e+h;
          int H = c+f+i;
          if (A == k && A == B && B == C && C == D && D == E && E == F && F == G && G == H) cnt++;
        }
      }
    }
  }
  */
  /*
  for (int a = 0; a < n; a++)
    for (int b = 0; b < n; b++)
      for (int c = 0; c < n; c++)
        for (int d = 0; d < n; d++)
          for (int e = 0; e < n; e++)
            for (int f = 0; f < n; f++)
              for (int g = 0; g < n; g++)
                for (int h = 0; h < n; h++)
                  for (int i = 0; i < n; i++) {
                    int A = a+e+i;
                    int B = c+e+g;
                    int C = a+b+c;
                    int D = d+e+f;
                    int E = g+h+i;
                    int F = a+d+g;
                    int G = b+e+h;
                    int H = c+f+i;
                    if (A == B && B == C && C == D && D == E && E == F && F == G && G == H) cnt++;
                  }
*/
  /*
  for (int a = 0; a < n; a++)
    for (int b = 0; b < n; b++)
      for (int c = 0; c < n; c++)
        for (int e = 0; e < n; e++) {
          int d = a+c-e;
          int f = a+b-e;
          if (d < 0 || d > 9 || f < 0 || f > 9) continue;
          cnt++;
        }
        */
        /*
  for (int a = 0; a < n; a++) {
    for (int b = 0; b < n; b++) {
      for (int c = 0; c < n; c++) {
        for (int d = 0; d < n; d++) {
          int A = a+b;
          int B = c+d;
          int C = a+c;
          int D = b+d;
          int E = a+d;
          int F = b+c;
          if (A == B && B == C && C == D && D == E && E == F) cnt++;
        }
      }
    }
  }
  */

  for (int n = 0; n < N; n++)
    for (int d = 0; d < N; d++)
      for (int g = 0; g < N; g++)
        for (int j = 0; j < N; j++)
          for (int m = 0; m < N; m++)
            for (int f = 0; f < N; f++)
              for (int h = 0; h < N; h++)
                for (int a = 0; a < N; a++)
                  for (int k = 0; k < N; k++) {
                    int z = d+g+j+m;
                    int e = z-f-g-h;
                    int i = z-m-e-a;
                    int l = z-i-j-k;
                    int p = z-a-f-k;
                    int b = z-f-j-n;
                    int c = z-a-b-d;
                    int o = z-m-n-p;
                    if (e < 0 || e > 9 || i < 0 || i > 9 || l < 0 || l > 9 || p < 0 || p > 9 || b < 0 || b > 9 || c < 0 || c > 9 || o < 0 || o > 9) continue;
                    int A = a+b+c+d;
                    int B = e+f+g+h;
                    int C = i+j+k+l;
                    int D = m+n+o+p;
                    int E = a+e+i+m;
                    int F = b+f+j+n;
                    int G = c+g+k+o;
                    int H = d+h+l+p;
                    int I = a+f+k+p;
                    int J = d+g+j+m;
                    if (A == B && B == C && C == D && D == E && E == F && F == G && G == H && H == I && I == J) cnt++;
                  }
  cout << cnt << "\n";
}
