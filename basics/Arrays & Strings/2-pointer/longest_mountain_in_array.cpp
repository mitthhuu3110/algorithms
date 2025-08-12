// link to the problem -> https://leetcode.com/problems/longest-mountain-in-array/
#include <bits/stdc++.h>
class Solution {
public:

    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        if(n < 3) return 0;

        int i = 1;
        int maxi = 0;

        while(i < n-1){
            if(arr[i-1] < arr[i] && arr[i] > arr[i+1]){
                int l = i-1, r = i+1;
                while(l > 0 && arr[l-1] < arr[l]) l--;
                while(r < n-1 && arr[r] > arr[r+1]) r++;
                maxi = max(maxi, r - l + 1);
                i = r;
            }else i++;
        }

        return maxi;
    }
};
