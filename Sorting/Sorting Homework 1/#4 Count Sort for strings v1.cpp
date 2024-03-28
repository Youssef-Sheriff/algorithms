#include <bits/stdc++.h>

using namespace std;

void count_sort_str(vector<string> &arr) {
    vector<vector<string >> countsort(26); // 26 letter in english 
    // i will push strings at first letter posion all strings which have the same first letter
    for (int i = 0; i < (int) arr.size(); ++i)
        countsort[arr[i][0] - 'a'].push_back(arr[i]);
    int idx = 0;
    for (int i = 0; i < 26; ++i) { // iterate to all strings from a to z
        for (int j = 0; j < countsort[i].size(); ++j, ++idx) { // loop to all string with same first letter
            arr[idx] = countsort[i][j]; // to be stable
        }
    }
}

void vector_print(vector<string> vec) {
    for (string i: vec) cout << i << ' ';
    cout << '\n';
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
//          اللهم علِّمنا ما ينفعنا، وانفعنا بما علمتنا، وزدنا علمًا.

    vector<int> nums = {10000107, 10000035, 10000001};
    vector<string> arr = {"ziad", "belal", "adam", "baheir", "ali"};
    count_sort_str(arr);
    vector_print(arr); // adam ali belal baheir ziad

    return 0;
}