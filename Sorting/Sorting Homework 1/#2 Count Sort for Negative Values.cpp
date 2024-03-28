#include <bits/stdc++.h>

using namespace std;

// I try to solve in this way but ur code is better than me :)
// I wroted under my code to remember it later
class Solution {
public:
    vector<int> sort_neg(vector<int> &nums, int mn) {
        vector<int> arr, count(-mn + 1);
        for (int i: nums) if (i < 0) arr.emplace_back(-i);
        for (int i = 0; i < (int) arr.size(); ++i) count[arr[i]] += 1;
        int idx = 0;
        for (int i = -mn; i >= 1; --i)
            for (int j = 0; j < count[i]; ++j, idx++)
                arr[idx] = -i;
        return arr;
    }

    vector<int> sort_pos(vector<int> &nums, int mx) {
        vector<int> arr, count(mx + 1);
        for (int i: nums) if (i >= 0) arr.emplace_back(i);
        for (int i = 0; i < (int) arr.size(); ++i) count[arr[i]] += 1;
        int idx = 0;
        for (int i = 0; i <= mx; ++i)
            for (int j = 0; j < count[i]; ++j, idx++)
                arr[idx] = i;
        return arr;
    }

    vector<int> link(vector<int> first, vector<int> second) {
        first.insert(first.end(), second.begin(), second.end());
        return first;
    }

    bool has_neg(vector<int> arr) {
        return *min_element(arr.begin(), arr.end()) < 0;
    }

    bool has_pos(vector<int> arr) {
        return *max_element(arr.begin(), arr.end()) >= 0;
    }

    vector<int> sortArray(vector<int> &nums) {
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        if (has_neg(nums) and has_pos(nums)) return link(sort_neg(nums, mn), sort_pos(nums, mx));
        else if (has_pos(nums)) return sort_pos(nums, mx);
        else return sort_neg(nums, mn);

    }
    /*
        Dr. Mustafa solutoin .. "it just shifts all nums with nums + maxRange (5000)"
        vector<int> sortArray(vector<int> &array) {
		// Find the largest element of the array
        int size = array.size();
        const int SHIFT = 50000;

        for (int i = 0; i < size; ++i)
            array[i] += SHIFT;


		int max = array[0];
		for (int i = 1; i < size; ++i)
			if (array[i] > max)
				max = array[i];

		vector<int> count(max+1);	// zeros

		// Compute Frequency
		for (int i = 0; i < size; ++i)
			count[array[i]] += 1;

		int idx = 0;
		for (int i = 0; i <= max; ++i) {
			for (int j = 0; j < count[i]; ++j, ++idx)
				array[idx] = i - SHIFT;
		}

		return array;
	}

     */
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
    
    vector<int> nums = {-6, 6, -1, -2, 0};
    Solution s;
    vector_print(s.sortArray(nums)); // -6 -2 -1 0 6

    return 0;
}