// Classic method for the prefix sum based question

class Solution {
public:
    int subarraySum(vector<int>& nums, int tar) {
        // normal prefix sum (how would you operate)
        // vector<int> prefix;
        // prefix[0] = nums[0];
        // int n = nums.size();
        // for(int i = 1; i < n; i++){
        //     prefix[i] = prefix[i-1] + nums[i];
        // }

        // the above method won't work, just solve it using .count() in ump

        int count = 0;
        int n = nums.size();
        int sum = 0;
        unordered_map<int, int> ump;
        ump[0] = 1;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            if(ump.count(sum - tar)){
                count += ump[sum - tar];
            }
            ump[sum]++;
        }
        return count;
    }
};
