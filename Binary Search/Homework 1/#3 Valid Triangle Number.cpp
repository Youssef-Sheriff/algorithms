#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

    int triangleNumber(vector<int> &nums) {
        int res = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; ++i) {
            for (int j = i + 1; j < nums.size() - 1; ++j) {
                int l = j + 1, r = nums.size() - 1, trgt = nums[i] + nums[j];
                while (l <= r) {
                    int mid = l + (r - l) / 2;
                    if (nums[mid] >= trgt) r = mid - 1;
                    else l = mid + 1;
                }
                res += l - j - 1;
            }
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

    vector<int> ans = {4, 2, 3, 4};
    Solution s;
    cout << s.triangleNumber(ans);


    return 0;
}

