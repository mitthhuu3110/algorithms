class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> ump;

        for(int i = 0; i < n; i++){
            ump[nums[i]]++;
        }

        int maxi = INT_MIN;

        for(auto it: ump){
            if(it.second > floor(n/2)) maxi = it.first;
        }

        return maxi;
    }
};



