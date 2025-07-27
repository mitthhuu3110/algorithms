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


// another solution by using vector instead of unordered map

int characterReplacement(string s, int k) {
    vector<int> freq(26, 0);
    int maxFreq = 0, left = 0, result = 0;

    for (int right = 0; right < s.length(); ++right) {
        freq[s[right] - 'A']++;
        maxFreq = max(maxFreq, freq[s[right] - 'A']);

        int windowSize = right - left + 1;
        if (windowSize - maxFreq > k) {
            freq[s[left] - 'A']--;
            left++;
        }

        result = max(result, right - left + 1);
    }

    return result;
}
