#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

    vector<int> sortarr(vector<int> &arr) {
        int size = arr.size();
        const int mn = *min_element(arr.begin(), arr.end());

        for (int i = 0; i < size; ++i)
            arr[i] -= mn;

        int mx = *max_element(arr.begin(), arr.end());

        vector<int> count(mx + 1);

        for (int i = 0; i < size; ++i)
            count[arr[i]] += 1;

        int idx = 0;
        for (int i = 0; i <= mx; ++i) {
            for (int j = 0; j < count[i]; ++j, ++idx)
                arr[idx] = i + mn;
        }

        return arr;
    }
};


void vector_print(vector<int> vec) {
    for (int i: vec) cout << i << ' ';
    cout << '\n';
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
//          اللهم علِّمنا ما ينفعنا، وانفعنا بما علمتنا، وزدنا علمًا.

    vector<int> nums = {10000107, 10000035, 10000001};
    Solution s;
    vector_print(s.sortarr(nums)); // -6 -2 -1 0 6

    return 0;
}