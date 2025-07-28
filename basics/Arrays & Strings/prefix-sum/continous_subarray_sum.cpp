// link to the problem -> https://leetcode.com/problems/continuous-subarray-sum/description/

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        // brute force method 

        // for(int i = 0; i < n-1; i++){
        //     for(int j = i+1; j < n; j++){
        //         int sum = 0;
        //         for(int k = i; k <= j; k++){
        //             sum += nums[k];
        //         }
        //         if(sum % k == 0) return true;
        //     }
        // }
        // return false;

        unordered_map<int, int> ump;
        int sum = 0;
        ump[0] = -1;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            if(ump.find(sum%k) != ump.end()){
                if(i - ump[sum%k] >= 2) return true;
            }
            else ump[sum%k] = i;
        }
        return false;
    }
};
