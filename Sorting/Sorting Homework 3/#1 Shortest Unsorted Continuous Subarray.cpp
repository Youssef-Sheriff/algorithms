#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int> nums) {
        vector<int> com = nums;
        int l = 0, r = 0;
        bool ok = true;
        sort(com.begin(), com.end());
        for (int i = 0; i < nums.size(); ++i) {
            if (ok and com[i] != nums[i]) {
                ok = !ok;
                l = i;
            } else if (com[i] != nums[i]) {
                r = i;
            }
        }

        if (r == 0 and l == 0) return 0;
        else return r - l + 1;
    }
};

int main() {

    Solution s;
    cout << s.findUnsortedSubarray();
    return 0;
}

