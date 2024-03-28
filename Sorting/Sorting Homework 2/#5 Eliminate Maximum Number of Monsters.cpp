#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int eliminateMaximum(vector<int>&dist, vector<int>&speed) {
        vector<float> arrival;
        for (int i = 0; i < dist.size(); ++i)
            arrival.push_back(dist[i] / (float)speed[i]);

        sort(arrival.begin(), arrival.end());
        int res = 0;
        for (int i = 0; i < dist.size(); ++i) {
            if (arrival[i] <= i) return res;
            res++;
        }
        return res;
    }
};


int main() {
    return 0;
}

