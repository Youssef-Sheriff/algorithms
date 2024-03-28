#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        int res = 0;
        for (int i = 0; i < nums.size(); i += 2) {
            res += nums[i]; // 1 2 3 4
        }
        return res;
    }
};

int main() {

    return 0;
}
