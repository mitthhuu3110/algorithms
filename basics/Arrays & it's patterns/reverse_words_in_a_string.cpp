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
