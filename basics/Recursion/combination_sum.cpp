#include <bits/stdc++.h>

class Solution {
public:
    void recursive(vector<vector<int>> &res, vector<int> &candidates, int target, int idx, vector<int> &temp){
        if(idx == candidates.size()){
            if(target == 0){
                res.push_back(temp);
            }
            return;
        }

        if(candidates[idx] <= target){
            temp.push_back(candidates[idx]);
            recursive(res, candidates, target - candidates[idx], idx, temp);
            temp.pop_back();
        }

        recursive(res, candidates, target, idx+1, temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        recursive(res, candidates, target, 0, temp);
        return res;
    }
};