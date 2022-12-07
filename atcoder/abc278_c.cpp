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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // cerr<<"Executed in: "<<((float)clock()/CLOCKS_PER_SEC)*1000<<"ms"<<"\n";
    solve();
}

void solve(){
    int people; cin >> people;
    int actions; cin >> actions;
    vector<vector<int>> adj_list(people+1);
    for(int i = 1; i < people+1; ++i){
        adj_list[i] = {i};
    }
    for(int x = 0; x < actions; ++x){
        int operation, user, target; cin >> operation >> target >> user;
        if(operation == 1){
            adj_list[user].PB(target);
        }else if(operation == 2){
            vector<int> &temp = adj_list[user];
            temp.erase(remove(temp.begin(), temp.end(), target), temp.end()); // erase-remove idiom
        }else {
            vector<int> &temp_1 = adj_list[user];
            vector<int> &temp_2 = adj_list[target];
            if((find(begin(temp_1), end(temp_1), target) != end(temp_1)) && (find(begin(temp_2), end(temp_2), user) != end(temp_2))) {
                cout << "Yes" << "\n";
            }else{
                cout << "No" << "\n";
            }
        }
    }
}
