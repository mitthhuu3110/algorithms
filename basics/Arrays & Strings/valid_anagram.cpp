class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();

        unordered_map<char, int> ump;

        // for(int i = 0; i < n; i++){
        //     ump[s[i]]++;
        // }

        // for(int j = 0; j < m; j++){
        //     if(ump[t[j]] != ump)
        // }

        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // return (s == t);

        for(int i = 0; i < n; i++){
            ump[s[i]]++;
        }

        for(int j = 0; j < m; j++){
            ump[t[j]]--;
        }

        for(auto it: ump){
            if(it.second != 0) return false;
        }
        return true;
    }
};
