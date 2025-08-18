// question link -> https://leetcode.com/problems/peak-index-in-a-mountain-array/description/


// Solving it in the binary search method shows that you have a deeper understanding of the concept
#include <bits/stdc++.h>

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();

        // for(int i = 1; i < n-1; i++){
        //     if(arr[i] > arr[i+1] && arr[i] > arr[i-1]){
        //         return i;
        //     }
        // }
        // return -1;
        int l = 0;
        int r = n-1;

        while(l < r){
            int m = l + (r - l)/2;
            if(arr[m] > arr[m+1]){
                r = m;
            }else l = m+1;
        }
        return l;
    }
};
