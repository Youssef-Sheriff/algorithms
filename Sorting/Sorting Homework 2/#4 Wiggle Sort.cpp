#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void wiggleSort(vector<int> &nums) {
        for (int i = 0; i < nums.size() - 1; ++i) {
            if (i % 2 == 0 and nums[i] > nums[i + 1]) swap(nums[i], nums[i + 1]);
            if (i % 2 != 0 and nums[i] < nums[i + 1]) swap(nums[i], nums[i + 1]);
        }
    }
};

int main() {

    return 0;
}
