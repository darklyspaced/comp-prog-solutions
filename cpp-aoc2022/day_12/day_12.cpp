#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <deque> // for stack and queue
#include <algorithm>
#include <fstream>
#include <typeinfo>

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

vector<vector<int>> possible_moves(pair<int, int> pos, vector<string> &em, int steps, map<pii, bool> &cache){
    int a = pos.first; int b = pos.second;
    int curr_elev = int(em[b][a])-96;
    pair<int, int> r, l, u, d; r.first = a + 1; r.second = b; l.first = a-1; l.second = b; d.first = a; d.second = b+1; u.first = a; u.second = b-1;
    vector<pair<int, int>> adj = {r, l, u, d};
    vector<vector<int>> ans;
    for(auto x : adj){
        if ((x.first >= 0 && x.second >= 0) && (x.first < em[0].size() && x.second < em.size())){ //lower and upper bounds for possible moves
            if(cache.at(x) == false){
                cache[x] = true;
                if((int(em[x.second][x.first])-97) - curr_elev <= 1){
                    vector<int> temp = {x.first, x.second, steps+1};
                    ans.push_back(temp);
                }
            }
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    // cerr<<"Executed in: "<<((float)clock()/CLOCKS_PER_SEC)*1000<<"ms"<<"\n";
}

void solve(){
    ifstream infile("day_12.txt");
    vector<string> elev_map;
    pair<int, int> start;
    pair<int, int> end;
    string line;
    map<pair<int, int>, bool> cache;

    while(getline(infile, line)){
        elev_map.push_back(line);
    }

    for (int i = 0; i < elev_map.size(); ++i){
        for (int j = 0; j < elev_map[i].size(); ++j){
            cache[make_pair(j, i)] = false;
            if (elev_map[i][j] == 'S'){
                start.first = j; start.second = i;
                elev_map[j][i] = 'a';
            }else if(elev_map[i][j] == 'E'){
                end.first = j; end.second = i;
                elev_map[j][i] = 'z';
            }
        }
    }

    // for(auto const &[key, value] : cache){
    //     cout << key.first << ", " << key.second << " : " << value << endl;
    // }

    vector<vector<int>> pm = possible_moves(start, elev_map, 0, cache); 
    vector<vector<int>> queue;
    queue.insert(queue.end(), pm.begin(), pm.end());
    vector<int> distances;

    while(!queue.empty()){
        vector<int> pos = queue[0];
        queue.erase(queue.begin());
        if(pos[0] == end.first && pos[1] == end.second){
            distances.push_back(pos[2]);
        }else{
            pm = possible_moves(make_pair(pos[0], pos[1]), elev_map, pos[2], cache);
            queue.insert(queue.end(), pm.begin(), pm.end());
        }
    }
    for(int x : distances){
        cout << x << endl;
    }
}

