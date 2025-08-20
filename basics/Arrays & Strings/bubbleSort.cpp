#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int binarySearchCount(vector<int> &arr){
          int n = arr.size();
          int count = 0;
          for(int i = n-1; i > 0; i--){
            for(int j = 0; j < i; j++){
              if(arr[j] > arr[j+1]){
                 swap(arr[j], arr[j+1]);
                 count++;
              }
            }
          }
    
          return count;
        }
        void game(vector<int>& a, vector<int>& b) {
          //Write your code here
          int fora = binarySearchCount(a);
          int forb = binarySearchCount(b);
    
          if(fora > forb) std::cout << "Binish" << endl;
          else if(fora < forb) std::cout << "Anish" << endl;
          else std::cout << "Tie" << endl;
    
      }
};
