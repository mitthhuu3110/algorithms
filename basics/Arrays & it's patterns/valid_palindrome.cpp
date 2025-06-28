class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string t = "";

        for(int i = 0; i < n; i++){
            if(s[i] >= 65 && s[i] <= 90){
                t.push_back(s[i] + 32);
            }else if(s[i] >= 97 && s[i] <= 122){
                t.push_back(s[i]);
            }else if(s[i] >= 48 && s[i] <= 57){
                t.push_back(s[i]);
            }
        }

        int m = t.length();
        int l = 0;
        int r = m-1;

        while(l <= r){
            if(t[l] != t[r]) return false;
            l++;
            r--;
        }

        return true;
    }
};
