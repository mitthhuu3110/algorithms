// link to the problem -> https://leetcode.com/problems/4sum/description/
#include <bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // int n = nums.size();
        // sort(nums.begin(), nums.end());
        // vector<vector<int>> res;
        // set<vector<int>> s;

        // for(int i = 0; i < n-3; i++){
        //     for(int j = i+1; j < n-2; j++){
        //         long long int find_target = (long long)target - ((long long)nums[i] + (long long)nums[j]);
        //         int low = j+1, high = n-1;
        //         while(low < high){
        //             if(nums[low] + nums[high] < find_target){
        //                 low++;
        //             }else if(nums[low] + nums[high] > find_target){
        //                 high--;
        //             }else{
        //                 s.insert({nums[i], nums[j], nums[low], nums[high]});
        //                 low++;
        //                 high--;
        //             }
        //         }
        //     }
        // }

        // for(auto it: s){
        //     res.push_back(it);
        // }

        // return res;




        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for(int i = 0; i < n-3; i++){
            for(int j = i+1; j < n-2; j++){
                long long int find_target = (long long)target - ((long long)nums[i] + (long long)nums[j]);
                int low = j+1, high = n-1;
                while(low < high){
                    if(nums[low] + nums[high] < find_target){
                        low++;
                    }else if(nums[low] + nums[high] > find_target){
                        high--;
                    }else{
                        res.push_back({nums[i], nums[j], nums[low], nums[high]});
                        int temp1 = low, temp2 = high;
                        while(low < high && nums[low] == nums[temp1]) low++;
                        while(low < high && nums[high] == nums[temp2]) high--;
                    }
                }
                while(j+1 < n && nums[j] == nums[j+1]) j++;
            }
            while(i+1 < n && nums[i] == nums[i+1]) i++;
        }

        return res;
    }
};
