#include <algorithm>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <stdio.h>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

void solve();
vector<string> board;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

void solve() {
    string search;
    cin >> search;
    int yes;
    cin >> yes;
    int x;
    cin >> x;

    for (int i = 0; i != yes; ++i) {
        string temp;
        getline(cin, temp);
        board.emplace_back(temp);
    }

    // init population of queue
    deque<pair<pair<int, int>, pair<string, int>>> queue; // y, x, dir, needle
    for (int y = 0; y < board.size(); ++y) {
        for (int x = 0; x < board[y].size(); ++x) {
            cout << board.at(y)[x] << " " << search[0] << endl;
            if (board.at(y)[x] == search[0]) {
                queue.push_back(make_pair(make_pair(y, x), make_pair("", 1)));
            }
        }
    }

    for (auto x : queue) {
        /* deque<pair<pair<int, int>, pair<string, int>>> queue; // y, x, dir, needle */
        cout << x.first.first << " " << x.first.second << endl;
    }

    /* while (!(queue.empty())) { */
    /*     pair<pair<int, int>, pair<string, int>> curr = queue[0]; */
    /*     queue.pop_front(); */
    /*     pair<int, int> pos = curr.first; */
    /*     if (!(curr.second.first.empty())) { */
    /*         string dir = curr.second.first; */
    /*         if (dir == "N") { */
    /*             for (int i = 0; i < search.size() - 1; ++i) { */
    /*             } */
    /*         } */
    /*     } else { */
    /*         vector<pair<pair<int, int>, pair<char, string>>> adj; */
    /*         string dir; */
    /*         if (y > 0) { // too high */
    /*             char top = board.at(pos.first + 1)[pos.second]; */
    /*             dir = "N"; */
    /*             adj.emplace_back(make_pair(pos.first + 1, pos.second), */
    /*                              make_pair(top, dir)); */
    /*         } */
    /*         if (x > 0) { // too left */
    /*             char left = board.at(pos.first)[pos.second - 1]; */
    /*             dir = "W"; */
    /*             adj.emplace_back(make_pair(pos.first, pos.second - 1), */
    /*                              make_pair(left, dir)); */
    /*         } */
    /*         if (x < board.at(0).size()) { // too right */
    /*             char right = board.at(pos.first)[pos.second + 1]; */
    /*             dir = "E"; */
    /*             adj.emplace_back(make_pair(pos.first, pos.second + 1), */
    /*                              make_pair(right, dir)); */
    /*         } */
    /*         if (y < board.size()) { // too bottom */
    /*             char bottom = board.at(pos.first - 1)[pos.second]; */
    /*             dir = "S"; */
    /*             adj.emplace_back(make_pair(pos.first - 1, pos.second), */
    /*                              make_pair(bottom, dir)); */
    /*         } */
    /*         if (y < board.size() && x < board.at(0).size()) { */
    /*             char bottom_right = board.at(pos.first - 1)[pos.second + 1]; */
    /*             dir = "SE"; */
    /*             adj.emplace_back(make_pair(pos.first - 1, pos.second + 1), */
    /*                              make_pair(bottom_right, dir)); */
    /*         } */
    /*         if (x > 0 && y > 0) { */
    /*             char top_left = board.at(pos.first + 1)[pos.second - 1]; */
    /*             dir = "NW"; */
    /*             adj.emplace_back(make_pair(pos.first + 1, pos.second - 1), */
    /*                              make_pair(top_left, dir)); */
    /*         } */
    /*         if (x > 0 && y < board.size()) { */
    /*             char bottom_left = board.at(pos.first - 1)[pos.second - 1]; */
    /*             dir = "SW"; */
    /*             adj.emplace_back(make_pair(pos.first - 1, pos.second - 1), */
    /*                              make_pair(bottom_left, dir)); */
    /*         } */
    /*         if (y > 0 && x < board.at(0).size()) { */
    /*             char top_right = board.at(pos.first + 1)[pos.second + 1]; */
    /*             dir = "NE"; */
    /*             adj.emplace_back(make_pair(pos.first + 1, pos.second + 1), */
    /*                              make_pair(top_right, dir)); */
    /*         } */
    /*         for (int i = 0; i < adj.size(); ++i) { */
    /*             if (adj[i].second.first == search[curr.second.second]) { */
    /*                 queue.push_back(make_pair( */
    /*                                     make_pair(adj[i].first.first, adj[i].first.second), */
    /*                                     make_pair(adj[i].second.second, curr.second.second + 1))); */
    /*             } */
    /*         } */
    /*     } */
    /* } */
}
