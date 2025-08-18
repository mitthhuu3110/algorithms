// link to the problem -> https://leetcode.com/problems/search-a-2d-matrix/description/

#include <bits/stdc++.h>

class Solution {
public:
    int binarySearch(vector<int> &arr, int target){
        int l = 0, r = arr.size() - 1;
        while(l <= r){
            int m = l + (r-l)/2;
            if(arr[m] == target){
                return m;
            }else if(arr[m] < target){
                l = m + 1;
            }else r = m - 1;
        }
        return -1;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0; i < n; i++){
            if(binarySearch(matrix[i], target) != -1) return true;
        }
        return false;
    }
};
