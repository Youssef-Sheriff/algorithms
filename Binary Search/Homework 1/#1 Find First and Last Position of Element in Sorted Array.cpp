#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        if (!nums.size()) return {-1, -1};
        vector<int> res;
        auto it = equal_range(nums.begin(), nums.end(), target);
        if (it.first != nums.end() and *it.first == target)
            res.push_back(it.first - nums.begin());
        else return {-1, -1};
        res.push_back(it.second - nums.begin() - 1);
        return res;
    }

};

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
    vector<int> v = {5, 7, 7, 8, 8, 10};
    int target = 6;
    vector<int> ans;
    Solution s;

    ans = s.searchRange(v, target);
    for (int i: ans) cout << i << ' ';

    return 0;
}
