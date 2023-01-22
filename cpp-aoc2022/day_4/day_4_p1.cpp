#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <deque> // for stack and queue
#include <algorithm>
#include <fstream>
#include <sstream>

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
    solve();
    // cerr<<"Executed in: "<<((float)clock()/CLOCKS_PER_SEC)*1000<<"ms"<<"\n";
}

void solve(){
    string line;
    string token;
    ifstream infile;
    int ans = 0;
    infile.open("day_4.txt");

    while(getline(infile, line)){
        istringstream ss(line);
        vector<string> temp;
        vector<int> p1, p2;
        map<int, vector<int>> map = {{1, p1}, {2, p2}};
        while(getline(ss, token, ',')){
            temp.push_back(token);
        }
        
        int counter = 0;

        for (string x : temp){
            ++counter;
            istringstream input(x);
            int start, finish; char buffer;
            input >> start >> buffer >> finish;
            for(int i = start; i < finish + 1; ++i){
                map.at(counter).push_back(i);
            }
        }
        vector<int> destination;
        set_intersection(map.at(1).begin(), map.at(1).end(),
                         map.at(2).begin(), map.at(2).end(),
                         back_inserter(destination));

        if (destination.size() > 0){
            ans++;
        }
    }
    cout << ans << endl;
}

