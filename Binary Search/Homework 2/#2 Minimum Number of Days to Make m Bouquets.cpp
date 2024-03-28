#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minDays(vector<int> &bloomDay, int m, int k) {
        if (m > bloomDay.size() / k) return -1;
        int l = 1, r = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1; // if not possible
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (possible(bloomDay, m, k, mid)) r = mid - 1, ans = mid;
            else l = mid + 1;
        }
        return ans;
    }

    bool possible(vector<int> &bloomDay, int total_bouquet, int flowers_per_bouquet, int waiting) {
        int adj_flowers = 0, bouquet = 0;
        for (int i = 0; i < bloomDay.size(); ++i) {
            if (bloomDay[i] <= waiting) {
                adj_flowers++;

                if (adj_flowers >= flowers_per_bouquet) bouquet++, adj_flowers = 0;

                if (bouquet == total_bouquet) return true;
            } else adj_flowers = 0;
        }
        return false;
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

    vector<int> nums = {1, 10, 3, 10, 2};
    int m = 3, k = 1;
    Solution s;
    cout << s.minDays(nums, m, k);

    return 0;
}














