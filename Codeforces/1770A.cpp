#include <iostream> 
#include <algorithm>
#include <string>
#include <stdio.h>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <set>
#include <unordered_map>
#include <vector>
#include <list>
#include <utility>
#include <functional>
#include <numeric>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define Inf32 1000000001
#define Inf64 4000000000000000001

using namespace std;

void solve();

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    // cerr<<"Executed in: "<<((float)clock()/CLOCKS_PER_SEC)*1000<<"ms"<<"\n";
}

void solve(){
    int _t;
    cin>>_t;
    rep(_, _t) {
        int n,m; cin >> n >> m;
        vector<int> pos(n+m);
        for ( auto &i : pos ) {
            cin >> i;
        }
        std::sort(pos.begin(), pos.end() - 1);
        std::reverse(pos.begin(), pos.end());

        long long ans = 0;
        rep(i, n) {
            ans += pos[i];
        }
        cout << ans << "\n";
    }
}
