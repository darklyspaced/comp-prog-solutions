#include <algorithm>
#include <cmath>
#include <deque> // for stack and queue
#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void solve();

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  solve();
  // cerr<<"Executed in: "<<((float)clock()/CLOCKS_PER_SEC)*1000<<"ms"<<"\n";
}

void solve() {
  vector<int> nums(7);
  for (auto &i : nums) {
    cin >> i;
  }
  sort(nums.begin(), nums.end());
  cout << nums[0] << " " << nums[1] << " "
       << nums[nums.size() - 1] - nums[0] - nums[1] << "\n";
}
