class Solution {
public:
    string reverseWords(string s) {
        vector<string> dict;
        string temp = "";

        for(int i = 0; i < s.size(); i++){
            while(i < s.size() && s[i] != ' '){
                temp.push_back(s[i]);
                i++;
            }
            if(temp != ""){
                dict.push_back(temp);
                temp = "";
            }

        }

        string res = "";
        int n = dict.size();

        for(int i = n-1; i >= 0; i--){
            res += dict[i];
            res += ' ';
        }
        res.pop_back();
        return res;
    }
};
