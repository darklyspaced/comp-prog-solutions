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
    // cerr<<"Executed in: "<<((float)clock()/CLOCKS_PER_SEC)*1000<<"ms"<<"\n";
    solve();
}

void solve(){
    int quantity; cin >> quantity;
    vi boards(quantity);
    vi l;
    for(int x : boards){
        cin >> x;
    }
    if (quantity%2==0){
        quantity = quantity >> 1;
        for(int i = 0; i < quantity; i++){
            int sum = boards[boards.size() - i] + boards[i];
            l.PB(sum);
        }
    }else{
    }
    for(int x : l){
        cout << x << endl;
    }
}
