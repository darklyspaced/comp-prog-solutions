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

void convert_to_b(const string &fh, const string &sh, bitset<52> &b_fh, bitset<52> &b_sh){
    int ascii;
    for(char x : fh){
        if(isupper(x)){
            ascii = (int(x)+58)-97;
            b_fh.set(ascii);
        }else{
            ascii = int(x)-97;
            b_fh.set(ascii);
        }
    }
    for(char x : sh){
        if(isupper(x)){
            ascii = (int(x)+58)-97;
            b_sh.set(ascii);
        }else{
            ascii = int(x)-97;
            b_sh.set(ascii);
        }
    }
}

void solve(){
    string line;
    vector<char> ans;
    int value = 0;
    int count = 0;
    ifstream infile;
    infile.open("day_3.txt");

    while(getline(infile, line)){
        count++; 
        const string fh = line.substr(0, ((line.size()/2)));
        const string sh = line.substr((line.size()/2), (line.size()-1));

        bitset<52> b_fh;
        bitset<52> b_sh;

        convert_to_b(fh, sh, b_fh, b_sh);
        bitset<52> same = b_fh & b_sh;

        for(int i = 0; i < same.size(); ++i){
            if(same[i] != 0){
                char ascii;
                if(i > 25){
                    ascii = char((i + 97)-58);
                    ans.push_back(ascii);

                }else{
                    ascii = char(i + 97);
                    ans.push_back(ascii);
                }
                break;
            }
        }
    }
    for(auto x : ans){
        if(isupper(x)){
            value += ((int(x)+58)-96);
        }else{
            value += (int(x)-96);
        }
    }
    cout << value;
}

