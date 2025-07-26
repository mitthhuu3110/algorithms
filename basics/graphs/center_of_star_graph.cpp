#include <bits/stdc++.h>
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        int m = edges[0].size();

        unordered_map<int, int> ump;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < 2; j++){
                ump[edges[i][j]]++;
            }
        }

        int maxi = 0;
        int res;

        for(auto it: ump){
            maxi = max(maxi, it.second);
            if(it.second == maxi) res = it.first;
        }

        return res;
    }
};
