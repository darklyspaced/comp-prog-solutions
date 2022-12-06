#include <list>
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


void solve(int l, int r);
int len;
vi tree;
int countt;
int ans;
int term;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;

    while(t--){

        cin >> len;
        term = ((len/2)/2)+1;

        for(int i = 0; i < len; ++i){
            int j; cin >> j;
            tree.PB(j);
        }

        for(int i=0; i < tree.size(); i = i + 2){
            if (tree[i] > tree[i+1]){
                int temp = tree[i];
                tree[i] = tree[i+1];
                tree[i+1] = temp;
            }
        }

        solve(0, len-1);
    }
    // cerr<<"Executed in: "<<((float)clock()/CLOCKS_PER_SEC)*1000<<"ms"<<"\n";
}


void solve(int l, int r){

    if(r - l == 1){
        return;
    }

    countt++;
    int m = (l + r) >> 1;

    pii rhs(m+1, r);
    pii lhs(l, m);

    int mx_rhs = *max_element(tree.begin()+rhs.F, tree.begin()+rhs.S+1);
    int mx_lhs = *max_element(tree.begin()+lhs.F, tree.begin()+lhs.S+1);

    if (mx_lhs > mx_rhs){
        swap_ranges(tree.begin()+lhs.F, tree.begin()+lhs.S+1, tree.begin()+rhs.F);
        ans = ans+1;
    }
    return solve(rhs.F, rhs.S) + solve(lhs.F, lhs.S);
    
}
