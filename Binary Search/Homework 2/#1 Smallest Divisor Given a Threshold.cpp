#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int calc(vector<int> &nums, int mid) {
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i)
            sum += (nums[i] + mid - 1) / mid; // ceil equation u can use buil_in_fun.

        return sum;
    }

    int smallestDivisor(vector<int> &nums, int threshold) {
        int l = 1, r = *max_element(nums.begin(), nums.end());
        int ans = r;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (calc(nums, mid) <= threshold) r = mid - 1, ans = mid;
            else l = mid + 1;
        }
        return ans;
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

    vector<int> nums = {2, 3, 5, 7, 11};
    int t = 11;
    Solution s;
    cout << s.smallestDivisor(nums, t);

    return 0;
}














