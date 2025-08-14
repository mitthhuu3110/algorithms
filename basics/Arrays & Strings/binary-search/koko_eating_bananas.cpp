// link to the problem -> https://leetcode.com/problems/koko-eating-bananas/
#include <bits/stdc++.h> 

class Solution {
public:

    bool canEatBananas(vector<int> &piles, int h, int k){
        long long totHours = 0;
        for(int it: piles){
            totHours += (it+k-1)/k;
        }
        if(totHours <= h) return true;
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        // koko eating bananas problem here you have to remember to calculate the ceil value 

        // if(piles.empty()) return 0;

        int n = piles.size();
        // int maxi = *max_element(piles.begin(), piles.end());
        // for(int k = 1; k <= maxi; k++){
        //     long long totHours = 0;
        //     for(int it: piles){
        //         totHours += (it+k-1)/k;
        //     }
        //     if(totHours <= h) return k;
        // }

        // return maxi;

        // the above solution works but takes a lot of time more than O(n^2)
        // we can use the binary search method for this one then
        int res = *max_element(piles.begin(), piles.end());
        int l = 1;
        int r = res;

        while(l <= r){
            int m = l + (r-l)/2;

            if(canEatBananas(piles, h, m)){
                res = m;
                r = m-1;
            }else l = m+1;
        }

        return res;
    }
};
