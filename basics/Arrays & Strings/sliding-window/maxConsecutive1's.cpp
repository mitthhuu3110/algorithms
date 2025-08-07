
#include <bits/stdc++.h>

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //writing down the standard variable sized window template 
        int n = nums.size();
        // unordered_map<int, int> ump;
        // int maxi = 0;

        // for(int i = 0; i < n; i++){
        //     if(nums[i] != 0){
        //         ump[nums[i]]++;
        //         maxi = max(maxi, ump[nums[i]]);
        //     }else{
        //         ump.clear();
        //         continue;
        //     }
        // }

        // return maxi;

        int i = 0, j = 0, maxi = 0;
        while(j < n){
            if(nums[j] == 0) i = j + 1;
            maxi = max(maxi, j - i + 1);
            j++;
        }

        return maxi;
    }
};
