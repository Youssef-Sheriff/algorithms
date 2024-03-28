#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestSumAfterKNegations(vector<int>&nums, int k) {
        int mn = INT_MAX, ans = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (k and nums[i] < 0) k--, nums[i] *= -1;
            ans += nums[i];
            mn = min(mn, nums[i]);
        }
        if (k % 2) ans -= 2 * mn;
        return ans;
    }
};

int main() {
    return 0;
}

