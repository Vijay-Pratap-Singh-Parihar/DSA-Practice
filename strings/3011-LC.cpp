#include<bits/stdc++.h>
using namespace std;

/*
Approach:
    - First we will create a copy of given array for not changing the given input
    - We will iterate over an array from 0th index to last index
        - first we will check if copyArray[i] <= copyArray[i+1], if yes then do nothing just continue.
        - Else check if copyArray[i] bits are equal to copyArray[i+1] if yes then swap them else return false.
    
    - Now, we will iterate over an array from last index to 0th index
        - In this turn we will check if copyArray[i] >= copyArray[i-1], if yes then do nothing just continue.
        - Else check if copyArray[i] bits are equal to copyArray[i-1], if yes then swap them else return false
            as per the question that if bits are not same then return false.
    
    - If everything goes good then return true as array can be sorted.
*/

class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> values = nums;

        for (int i = 0; i < n - 1; i++) {
            if (values[i] <= values[i + 1]) {
                continue;
            } else {
                if (__builtin_popcount(values[i]) ==
                    __builtin_popcount(values[i + 1])) {
                    swap(values[i], values[i + 1]);
                } else {
                    return false;
                }
            }
        }

        for (int i = n - 1; i >= 1; i--) {
            if (values[i] >= values[i - 1]) {
                continue;
            } else {
                if (__builtin_popcount(values[i]) ==
                    __builtin_popcount(values[i - 1])) {
                    swap(values[i], values[i - 1]);
                } else {
                    return false;
                }
            }
        }

        return true;
    }
};