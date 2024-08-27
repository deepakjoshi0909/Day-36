#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long minCost(vector<int>& nums, int x) {
        int n = nums.size();
        long long minTotalCost = LLONG_MAX;

        // Direct cost without any operations
        long long directCost = 0;
        for (int cost : nums) {
            directCost += cost;
        }
        minTotalCost = directCost;

        // Cost with operations
        for (int k = 0; k < n; ++k) {
            long long operationCost = k * (long long)x;
            long long buyCost = 0;
            for (int i = 0; i < n; ++i) {
                buyCost += nums[(i + k) % n];
            }
            minTotalCost = min(minTotalCost, operationCost + buyCost);
        }

        return minTotalCost;
    }
};

