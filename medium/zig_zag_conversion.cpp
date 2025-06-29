class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length();
        // int k = numRows;

        // vector<vector<char>> v(n, m);

        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < m; j++){
        //         v[i][j] == 
        //     }
        // }

        vector<string> temp(n, "");
        int j = 0, dir = -1;

        for(int i = 0; i < n; i++){
            if(j == numRows - 1 || j == 0) dir *= (-1);
            temp[j] += s[i];
            if(dir == 1) j++;
            else j--;
        }

        string res;
        for(string it: temp){
            res += it;
        }

        return res;
    }
};
