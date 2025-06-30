class Solution {
public:
    bool isPalindrome(string &s){
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (s[l++] != s[r--]) return false;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.length();
        int maxLen = 0;
        string res = "";

        int len = n;
        while (len >= 1) {
            int i = 0;
            while (i + len <= n) {
                string sub = s.substr(i, len);
                if (isPalindrome(sub)) {
                    return sub;  
                }
                i++;
            }
            len--;
        }

        return res;
    }
};
