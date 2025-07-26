// question link -> https://leetcode.com/problems/find-pivot-index/description/
#include <bits/stdc++.h>
class Solution {
public:
  int pivotindex(vector<int> &nums){
    int n = nums.size();
    int totSum = 0;
    int leftSum = 0;

    for(int i = 0; i < n; i++){
      totSum += nums[i];
    }

    for(int i = 0; i < n; i++){
      totSum -= nums[i];
      if(totSum == leftSum) return i;
      leftSum += nums[i];
    }
    return -1;
  }
};
