#include <bits/stdc++.h> 

class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        //brute force -> O(n)
        // int n = arr.size();
        // int count = 0;
        // for(int i = 0; i < n; i++){
        //     if(arr[i] == target) count++;
        // }
        // return count;
        
        //optimized solution -> binary search
        //good thought but will everyone get this thought ?? 
        return upper_bound(arr.begin(), arr.end(), target) - lower_bound(arr.begin(), arr.end(), target);
    }
};
