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
  string snap = "683776313587931J2KK6J24589494Q95Q5K74T12JTTTQ8Q16J2K";
  while (snap.size() > 0) {
    for (int i = 1; i < snap.size(); ++i) {
      if (snap[i - 1] == snap[i]) {
        snap = snap.substr(i);
        cout << snap;
        break;
      }
    }
  }
}
