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
#define FOR(var, init, reps) for(int(var) = (init); (var) < (reps); ++(var))
#define REP(var, reps) FOR(var, 0, reps)
#define SIZE(v) v.size()
#define ALL(v) v.begin(), v.end()

void solve();
void swap(int l, int r, vi &tree);
vector<pii> pt;
vi tree;
int res = 0;
int iter;
int iters = 0;
deque<pii> queue;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; cin >> t;
    while(t--){
        solve();
    }
    // cerr<<"Executed in: "<<((float)clock()/CLOCKS_PER_SEC)*1000<<"ms"<<"\n";
}

void swapC(int l, int r){
    iters++;
    int m = (l + r) >> 1;
    pii rc {m+1, r};
    pii lc {l, m};
    int mx_r = *max_element(tree.begin()+rc.F, tree.begin()+rc.S+1);
    int mx_l = *max_element(tree.begin()+lc.F, tree.begin()+lc.S+1);
    if (mx_l > mx_r){
        swap_ranges(tree.begin() + lc.F, tree.begin() + lc.S + 1, tree.begin() + rc.F);
        ++res;
    }
    if(is_sorted(ALL(tree)) || iters == iter-1){
        cout << res << "\n";
        return;
    }
    if(iters >= iter-1){
        cout << -1 << "\n";
        return;
    }
    queue.push_back(rc);
    queue.push_back(lc);
}

void solve(){
    int sum;
    cin >> iter;
    REP(i, iter/2){
        int a; cin >> a; int b; cin >> b;
        sum += a + b;
        if(a - b == 1){
            tree.PB(b);
            tree.PB(a);
            res++;
        }else if(a - b == -1){
            tree.PB(a);
            tree.PB(b);
        }else{
            cout << -1 << "\n"; return;
        }
    }
    if(is_sorted(ALL(tree))){
        cout << res << "\n";
    }
    swapC(0, iter-1);
}
