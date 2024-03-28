#include <bits/stdc++.h>

using namespace std;

void insertoin_sort_dec(vector<int> &vec) {
    for (int i = 1; i < (int) vec.size(); ++i) {
        for (int j = i; j - 1 >= 0 and vec[j - 1] < vec[j]; --j) {
            swap(vec[j], vec[j - 1]);
        }
    }
}

void print(vector<int> vec) {
    for (int i = 0; i < (int) vec.size(); ++i) {
        cout << vec[i] << ' ';
    }
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    vector<int> arr = {1, 6, 7, 103, 0, 1, 3, 5};
    insertoin_sort_dec(arr);
    print(arr);
    return 0;
}