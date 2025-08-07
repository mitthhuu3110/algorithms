// question link -> https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

#include <bits/stdc++.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char, int> ump;
        int maxi = 0;

        int left = 0, right = 0;

        while(right < n){
            ump[s[right]]++;
            while(ump[s[right]] > 1){
                ump[s[left]]--;
                left++;
            }
            maxi = max(maxi, right - left + 1);
            right++;
        }

        return maxi;
    }
};
