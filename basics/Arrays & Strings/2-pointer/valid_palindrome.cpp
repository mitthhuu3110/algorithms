// link to the problem -> https://leetcode.com/problems/valid-palindrome/description/

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


// another method 

class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";

        int n = s.size();
        for(int i = 0; i < n; i++){
            if((s[i] <= 122 && s[i] >= 97) || (s[i] <= 90 && s[i] >= 65) || (s[i] <= 57 && s[i] >= 48)){
                if(s[i] <= 90 && s[i] >= 65){
                    temp.push_back(s[i] + 32);
                }
                else temp.push_back(s[i]);
            }
        }

        int  k = temp.size();

        int i = 0, j = k-1;
        while(i <= j){
            if(temp[i] != temp[j]) return false;
            i++;
            j--;
        }

        return true;
    }
};
