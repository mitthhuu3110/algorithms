class Solution {
public:

    void reverser(vector<int> &nums, int i, int j){
        while(i < j){
            swap(nums[i++], nums[j--]);
        }
    }
    void rotate(vector<int>& nums, int k) {
        // brute force

        // int n = nums.size();
        // k = k % n;

        // for(int i = 0; i < k; i++){
        //     int last = nums[n-1];
        //     for(int j = n-1; j > 0; j--){
        //         nums[j] = nums[j-1];
        //     }
        //     nums[0] = last;
        // }

        //the above code will throw TLE 

        //optimized approach 

        int n = nums.size();
        k = k % n;


        reverser(nums, 0, n-1);
        reverser(nums, 0, k-1);
        reverser(nums, k, n-1);
    }
};
