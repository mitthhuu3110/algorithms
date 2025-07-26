class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, right = 0, sum = 0;
        int n = nums.size();
        int mini = INT_MAX;
        while(right < n){
            sum += nums[right];
            while(sum >= target){
                mini = min(mini, right - left+1);
                sum -= nums[left];
                left++;
            }
            right++;
        }

        return mini == INT_MAX ? 0 : mini;
    }
};
