#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <deque> // for stack and queue
#include <algorithm>
#include <fstream>
#include <bit>
#include <bitset>
#include <cstdint>

using namespace std;

void solve();
void convert_to_b(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    // cerr<<"Executed in: "<<((float)clock()/CLOCKS_PER_SEC)*1000<<"ms"<<"\n";
}

void convert_to_b(const string &fh, bitset<52> &b_x){
    int ascii;
    for(char x : fh){
        if(std::isupper(x)){
            ascii = (int(x)+58)-97;
            b_x.set(ascii);
        }else{
            ascii = int(x)-97;
            b_x.set(ascii);
        }
    }
}

void three_to_one(vector<char> &ans, vector<string> &backpacks, bitset<52> &same){
    bitset<52> b_1, b_2, b_3;
    map<int, bitset<52>> bm = {{0, b_1}, {1, b_2}, {2, b_3}};

    for(int i = 0; i < backpacks.size(); ++i){
        convert_to_b(backpacks[i], (bm.at(i)));
    }
    same = (bm.at(0) & bm.at(1)) & bm.at(2);

    for (int i = 0; i < same.size(); ++i){
        if (same[i] != 0){
            char ascii;
            if (i > 25){
                ascii = char((i + 97) - 58);
                ans.push_back(ascii);
                break;
            }else{
                ascii = char(i + 97);
                ans.push_back(ascii);
                break;
            }
        }
    }
    backpacks.clear();
}

void solve(){
    string line;
    vector<string> backpacks;
    vector<char> ans;
    int value = 0;
    int count = 0;
    bitset<52> same;
    ifstream infile;
    infile.open("day_3.txt");

    while(getline(infile, line)){
        if(count == 3){
            three_to_one(ans, backpacks, same);
            backpacks.push_back(line);
            count = 1;
        }else{
            backpacks.push_back(line);
            count++; 
        }
    }
    three_to_one(ans, backpacks, same);

    for(char x : ans){
        if(isupper(x)){
            value += ((int(x)+58)-96);
        }else{
            value += (int(x)-96);
        }
    }

    cout << value << endl;
    infile.close();
}

