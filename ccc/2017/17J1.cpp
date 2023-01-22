#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <deque> // for stack and queue
#include <algorithm>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> pii;

#define PB push_back
#define F first
#define S second
#define FOR(var, init, reps) for(int(var) = (init) < (reps); ++(var))
#define REP(var, reps) FOR(var, 0, reps)
#define SIZE(v) v.size()


void solve();

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    // cerr<<"Executed in: "<<((float)clock()/CLOCKS_PER_SEC)*1000<<"ms"<<"\n";
}

void solve(){
    vi coords(2);
    for(auto &x : coords)
        cin >> x;
    if (coords[0] > 0)
        cout << ((coords[1]>0) ? 1 : 4);
    if (coords[0] < 0)
        cout << ((coords[1]<0) ? 3 : 2);
}