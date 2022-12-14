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

typedef vector<int> vi; typedef long long ll;
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
    ifstream infile;
    string line; vector<string> cargo;
    deque<char> s1, s2 ,s3, s4, s5, s6, s7, s8, s9;
    map<int, deque<char>> map = {{0, s1}, {4, s2}, {8, s3}, {12, s4}, {16, s5}, {20, s6}, {24, s7}, {28, s8}, {32, s9}};
    infile.open("day_5.txt");

    while(getline(infile, line)){
        if(!(line.empty())){
            cargo.push_back(line);
        }else{
            break;
        }
    }

    cargo.erase(cargo.end()-1);

    for(string x : cargo){
        for(int i = 0; i < x.size(); ++i){
            if (x[i]=='['){
                map.at(i).push_back(x[i+1]);
            }
        }
    }

    while(getline(infile, line)){
        istringstream ss(line);
        int quant, origin, destination; string buffer;
        ss >> buffer >> quant >> buffer >> origin >> buffer >> destination; 
        auto start = map.at((origin*4)-4).begin();
        auto end = map.at((origin*4)-4).begin()+quant;
        (map.at((destination*4)-4))
            .insert(begin(map.at((destination*4)-4)), start, end);
        (map.at((origin*4)-4))
            .erase(start, end);
    }
    for(int i = 0; i <= 32; i=i+4){
        if(!(map.at(i).empty())){
            cout << map.at(i).front();
        }
    }
}

