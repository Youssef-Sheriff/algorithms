#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool complete(int n, long long rows) {
        long long sum = rows * (rows + 1) / 2;
        return n >= sum;
    }

    int arrangeCoins(int n) {
        int l = 1, r = n, ans = 0;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (complete(n, mid)) ans = mid, l = mid + 1;
            else r = mid - 1;
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

    int n = 8;
    Solution s;
    cout << s.arrangeCoins(8); // 3


    return 0;
}

