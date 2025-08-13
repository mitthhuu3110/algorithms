// problem link -> https://leetcode.com/problems/sort-colors/
#include <bits/stdc++.h> 

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // using in-built sort funtion
        // sort(nums.begin(), nums.end());

        // brute force approach 
        int n = nums.size();

        int zeroes = 0, ones = 0, twos = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) zeroes++;
            else if(nums[i] == 1) ones++;
            else twos++;
        }

        // for(int i = 0; i < zeroes; i++){
        //     nums[i] = 0;
        // }

        // for(int i = zeroes; i < zeroes + ones; i++){
        //     nums[i] = 1;
        // }

        // for(int i = zeroes + ones; i < zeroes + ones + twos; i++){
        //     nums[i] = 2;
        // }

        // optimized approach - normal 

        // for(int i = 0; i < n; i++){
        //     if(zeroes-- > 0){
        //         nums[i] = 0;
        //     }else if(ones-- > 0){
        //         nums[i] = 1;
        //     }else {
        //         nums[i] = 2;
        //     }
        // }

        // optimized approach using 2 pointers 

        // we will move left in case of zero, we will stay there in case of one, will move forward incase of high

        int low = 0, mid = 0, high = n-1;
        
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }else if(nums[mid] == 1){
                mid++;
            }else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }

    }
};
