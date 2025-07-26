class Solution {
public:
    bool isIsomorphic(string s, string t) {
        //brute force
        // map<char, int> mps;
        // map<char, int> mpt;

        // set<int> ss;
        // set<int> st;

        // for(int i = 0; i < s.length(); i++){
        //     mps[s[i]]++;
        // }

        // for(auto it: mps){
        //     ss.insert(it.second);
        // }

        // for(int j = 0; j < t.length(); j++){
        //     mpt[t[j]]++;
        // }

        // for(auto it: mpt){
        //     st.insert(it.second);
        // }

        // return ss == st;

        unordered_map<char, int> indexS;
        unordered_map<char, int> indexT;

        for(int i = 0; i < s.length(); i++){
            if(indexS.find(s[i]) == indexS.end()){
                indexS[s[i]] = i;
            }
            if(indexT.find(t[i]) == indexT.end()){
                indexT[t[i]] = i;
            }

            if(indexS[s[i]] != indexT[t[i]]) return false;
        }

        return true;
    }
};
