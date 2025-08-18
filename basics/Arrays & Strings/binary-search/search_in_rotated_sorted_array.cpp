// link to the solution -> https://leetcode.com/problems/search-in-rotated-sorted-array/

#include <bits/stdc++.h>

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, h = n-1;
        while(l <= h){
            int m = l + (h - l)/2;
            if(nums[m] == target) {
                return m;
            }
            // check whether the left half is sorted & after that continue binary search in the left half 
            else if(nums[l] <= nums[m]){
                if(nums[l] <= target && target <= nums[m]){
                    h = m - 1;
                }else l = m + 1;
            }
            // check whether the right half is sorted & after that continue binary search in the right half
            else {
                if(nums[m] <= target && target <= nums[h]){
                    l = m + 1;
                }else h = m - 1;
            }
        }

        return -1;
    }
};
