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
vi cache;

int factorial(int n){
    if (n > 1){
        return n * factorial(n-1);
    }else{
        return 1;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // cerr<<"Executed in: "<<((float)clock()/CLOCKS_PER_SEC)*1000<<"ms"<<"\n";
    solve();
}

void solve(){
    pii ans;
    int len; cin >> len;
    vi boards(len);
    vi l;
    vi lo;
    vi cacheo;
    vi cache;
    vi 

    for(int &x : boards){
        cin >> x;
    }

    sort(begin(boards), end(boards));

    if (len%2==0){
        for (int i = 0; i < len/2; i++) {
            int sum = boards[boards.size() - (i+1)] + boards[i];
            l.PB(sum);
        }
    }else{
        int temp = boards.back();
        boards.erase(end(l));

        for (int i = 0; i < len/2; i++) {
            int sum = boards[boards.size() - (i+1)] + boards[i];
            l.PB(sum);
        }

        boards.PB(temp);
        boards.erase(begin(l));

        for (int i = 0; i < len/2; i++) {
            int sum = boards[boards.size() - (i+1)] + boards[i];
            lo.PB(sum);
        }
    }

    sort(begin(l), end(l));

    pii count(0, 0);
    pii big_count(1, 0);

    pii count_o(0, 0);
    pii big_count_o(1, 0);

    for(int i = 0; i < l.size(); ++i){
        if (l[i] == l[i+1]){
            count.F++;
            count.S = l[i+1];
        }else{
            if(count > big_count){
                big_count.S = count.S;
                big_count.F = count.F+1;
                count.F = 0;
            }
        }
    }

    if(lo.size()>0){
        sort(begin(lo), end(lo));
        for(int i = 0; i < lo.size(); ++i){
            if (lo[i] == lo[i+1]){
                count_o.F++;
                count_o.S = l[i+1];
            }else{
                if(count > big_count){
                    big_count_o.S = count.S;
                    big_count_o.F = count.F+1;
                    count_o.F = 0;
                }
            }
        }
    }

    if (ans.F == 1){
        ans.S = factorial(len) / (factorial(2) * factorial(len - 2));
        cout << ans.F << " " << ans.S << endl;
        return;
    }



    ans.F = big_count.F;
    ans.S = big_count.S;


    cout << ans.F << " " << ans.S << endl;
}

    //compile command /usr/bin/clang++ -std=c++20 -stdlib=libc++ -g '/Users/rohan/Documents/Macbook/Development/python/comp-coding-solutions/CCC (Canadian Computing Competition)/2017/17J5.cpp' -o '/Users/rohan/Documents/Macbook/Development/python/comp-coding-solutions/CCC (Canadian Computing Competition)/2017/17J5'
