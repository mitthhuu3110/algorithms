// problem link -> https://leetcode.com/problems/max-consecutive-ones-iii/ 

#include <bits/stdc++.h>
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // what is the intution that you will be finding
        // here you have to find a subarray with a contraint (atmost k 0's can be flipped) 
        // 1. Count the violations (able to flip the bit)
        // 2. Shrink the window size and increase the left pointer for that purpose
        // 3. Enforce the condition (if 0's more than k) then move forward with left
        // 4. Now calculate the maxi (max length of the subarray) here



        int n = nums.size();
        int left = 0, right = 0, maxi = 0, zeroCount = 0;
        while(right < n){
            if(nums[right] == 0) zeroCount++;
            while(zeroCount > k){
                if(nums[left] == 0) zeroCount--;
                left++;
            }
            maxi = max(maxi, right - left + 1);
            right++;
        }
        return maxi;
    }
};
