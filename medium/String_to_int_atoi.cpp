#include <bits/stdc++.h>

class Solution {
public:
    int myAtoi(string s) {
        // int n = s.length();
        // string temp = "";

        // if(n == 0) return 0;
        
        // bool flag = 1;
        // for(int i = 0; i < n; i++){
        //     if(s[i] >= 49 && s[i] <= 57) flag = 0;
        // }

        // if(flag) return 0;

        // // char sign = '';

        // for(int i = 0; i < n; i++){
        //     if(s[i] == ' ') continue;
        //     if(s[i] == '-') temp[0] = '-';
        //     if(s[i] == '+') continue;

        //     if(s[i] >= 49 && s[i] <= 57) temp.push_back(s[i]);
        //     if(s[i+1] < 49 || s[i] > 57) break;
        // }

        // return (int)temp;

        //optimal solution for solving string based question 

        int i = 0; 
        int sign = 1;
        int n = s.length();

        long res = 0;

        if(n == 0) return 0;

        while(i < n && s[i] == ' '){
            i++;
        }

        if(s[i] == '-'){
            sign = -1;
            i++;
        }else if(s[i] == '+'){
            i++;
        }


        while(i < n){
            if(s[i] >= '0' && s[i] <= '9'){
                res = res*10 + (s[i] - '0');
                if(res > INT_MAX && sign == -1) return INT_MIN;
                else if(res > INT_MAX && sign == 1) return INT_MAX;
                i++;
            }else {
                return res * sign;
            }
        }

        return (res * sign);
    }
};
