#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

int idx(string &str) {
    assert(str.size() >= 2);
    return (str[0] - 'a') * 26 + (str[1] - 'a');
}

void countsort(vector<string> &arr) {
    vector<vector<string>> count(26 * 26);
    for (int i = 0; i < arr.size(); ++i)
        count[idx(arr[i])].emplace_back(arr[i]);

    int idx = 0;
    for (int i = 0; i < 26 * 26; ++i) {
        for (int j = 0; j < count[i].size(); idx++, ++j) {
            arr[idx] = count[i][j];
        }
    }
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
    vector<string> arr = {"axz", "axa", "zzz", "abc", "abe"};
    countsort(arr);
    for (auto i: arr) cout << i << ' ' << endl;
    // abc abe axz axa zzz
    return 0;
}
