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
  map<char, char> map{
      {'A', 'E'}, {'E', 'I'}, {'I', 'O'}, {'U', 'A'}, {'O', 'U'}};
  getline(cin, input);

  input.erase(remove(begin(input), end(input), ' '), end(input));

  for (int i = 0; i < input.size(); ++i) {
    if (map.find(input[i]) != map.end()) {
      input[i] = map.at(input[i]);
    }
  }

  cout << input << endl;
}
