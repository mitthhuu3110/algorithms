// class Solution {
// public:
//     bool isValid(string s) {
//         int n = s.length();
//         stack<char> st;

//         for(char ch: s){
//             if(ch == '(' || ch == '{' || ch == '['){
//                 st.push(ch);
//             }else{
//                 if(st.empty()) return false;
//                 char top = st.top();
//                 if((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '[')){
//                     return false;
//                 }
//                 st.pop();
//             }
//         }
//         return st.empty();
//     }
// };



// solution having the best time complexity and space complexity 
#include <bits/stdc++.h>
class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        int n=s.size();
        
        for(int i=0;i<n;i++){
            if(st.empty())
                st.push(s[i]);
            
            else if(st.top() == '(' && s[i] ==')')
                st.pop();
            
            else if(st.top() == '{' && s[i] =='}')
                st.pop();
            
            else if(st.top() == '[' && s[i] ==']')
                st.pop();
                
            else
                st.push(s[i]);
        }
        return st.empty();
    }
};
