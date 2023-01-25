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
  string input;
  cin >> input;
  int A = 0;
  int B = 0;
  for (int i = 0; i < input.size(); i = i + 2) {
    if (input[i] == 'A') {
      A = A + input[i + 1];
    } else {
      B = B + input[i + 1];
    }
  }
  char ans = (A > B) ? 'A' : 'B';
  cout << ans << endl;
}
