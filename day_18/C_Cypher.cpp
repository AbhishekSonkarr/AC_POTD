#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
  int n;
  cin >> n; // size of the wheel
  vector<int> a(n);
  for (auto &num : a)
    cin >> num;

  vector<string> str;
  str.reserve(n);
  int b;

  for (int i = 0; i < n; i++) {
    str.emplace_back();
    cin >> b >> str.back();
  }
  int k = 0;
  for (auto &s : str) {
    for (auto &c : s) {
      if (c == 'D')
        a[k] = a[k] + 1;
      else if (c == 'U')
        a[k] = a[k] - 1;
    }
    if (a[k] >= 10 || a[k] < 0) {
      if (a[k] > 0)
        a[k] = a[k] - 10;
      else
        a[k] = 10 - abs(a[k]);
    }
    k++;
  }
  for (auto i : a)
    cout << i << " ";
  cout << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
