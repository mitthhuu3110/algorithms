// using sliding window & prefix sum simultaneously but simple solution 

#include <bits/stdc++.h>

class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        // how do you use prefix sum here ?? 
        
        int n = arr.size();
        int windowSum = 0;
        for(int i = 0; i < k; i++){
            windowSum += arr[i];
        }
        int maxi = windowSum;
        
        
        for(int i = k; i < n; i++){
            windowSum += arr[i] - arr[i-k];
            maxi = max(maxi, windowSum);
        }
        
        return maxi;
    }
};
