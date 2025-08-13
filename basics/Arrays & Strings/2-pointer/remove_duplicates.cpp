// link to the question -> https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
#include <bits/stdc++.h> 

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        //brute force 
        // set<int> temp;
        // int n = nums.size();

        // for(int i = 0; i < n; i++){
        //     temp.insert(nums[i]);
        // }

        // int i = 0;

        // for(int it: temp){
        //     nums[i++] = it;
        // }


        // return temp.size();

        //using 2 pointer methods 
        if(nums.empty()) return 0;

        int i = 0;
        int n = nums.size();

        for(int j = 1; j < n; j++){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
        }

        return i+1;
    }   
};
