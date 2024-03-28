#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>> &intervals) {

        map<int, int> m;
        vector<int> res;
        for (int i = 0; i < (int) intervals.size(); ++i) m.insert({intervals[i][0], i});

        for (int i = 0; i < intervals.size(); ++i) {
            auto it = m.lower_bound(intervals[i][1]);
            if (it != m.end()) res.push_back(it->second);
            else res.push_back(-1);
        }
        return res;
    }
};

void print_vector(vector<int>(v)) {
    for (int i: v) cout << i << ' ';
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
    vector<vector<int>> v = {{3, 4},
                             {2, 3},
                             {1, 2}};
    vector<int> ans;
    Solution s;
    ans = s.findRightInterval(v);
    print_vector(ans); // -1 0 1
    return 0;
}
