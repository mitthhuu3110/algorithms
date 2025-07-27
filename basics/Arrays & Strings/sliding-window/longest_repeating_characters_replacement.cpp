// link to th problem -> https://leetcode.com/problems/longest-repeating-character-replacement/description/

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();

        int l = 0, r = 0;
        unordered_map<char, int> ump;
        int maxi = 0;
        int maxFreq = 0;

        while(r < n){
            ump[s[r]]++;
            maxFreq = max(maxFreq, ump[s[r]]);
            if((r - l + 1) - maxFreq > k){
                ump[s[l]]--;
                l++;
            }
            maxi = max(maxi, (r - l + 1));
            r++;
        }

        return maxi;
        
    }
};
