class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        //brute force
        // int n = nums.size();
        // int count = 0;
        // vector<int> arr;

        // for(int i = 0; i < n; i++){
        //     if(nums[i] != 0){
        //         arr.push_back(nums[i]);
        //     }else count++;
        // }

        // for(int i = 0; i < count; i++){
        //     arr.push_back(0);
        // }

        // nums = arr;

        // you can do it for way less time complexity using 2 pointers

        int left = 0;
        int n = nums.size();

        for(int right = 0; right < n; right++){
            if(nums[right] != 0){
                swap(nums[left], nums[right]);
                left++;
            }
        }
    }
};
