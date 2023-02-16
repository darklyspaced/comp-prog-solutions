#include <iostream>
#include <vector>

using namespace std;
bool solve(vector<vector<int>> *coords);

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int iters;
  cin >> iters;
  vector<vector<int>> coords;

  for (int i = 0; i < iters; i++) {
    int x, y, z;
    cin >> x >> y >> z;
    vector<int> temp = {x, y, z};
    coords.push_back(temp);
  }
  if (solve(&coords) == true)
    cout << "YES";
  else
    cout << "NO";
}

bool solve(vector<vector<int>> *coords) {
  int count = 0;
  for (int i = 0; i < 3; i++) {
    int ans = 0;
    for (vector<int> x : *coords) {
      ans += x[i];
    }
    if (ans == 0)
      count++;
  }
  if (count == 3)
    return true;
  else
    return false;
}
