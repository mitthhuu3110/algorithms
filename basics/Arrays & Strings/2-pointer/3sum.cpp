// link to the problem -> https://leetcode.com/problems/3sum/
#include <bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();

        sort(nums.begin(), nums.end()); // O(nlogn) 

        set<vector<int>> s;

        for(int i = 0; i < n-2; i++){
            int low = i+1, high = n-1;

            while(low < high){
                if(nums[i] + nums[low] + nums[high] < 0){
                    low++;
                }else if(nums[i] + nums[low] + nums[high] > 0){
                    high--;
                }else{
                    s.insert({nums[i], nums[low], nums[high]});
                    low++;
                    high--;
                }
            }
        }

        for(auto it: s){
            res.push_back(it);
        }

        return res;
    }
};
