

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        //brute force & TLE
        // int n = arr.size();
        // vector<int> res;
        
        // for(int i = 0; i < n; i++){
        //     int temp = arr[i];
        //     bool flag = 1;
        //     for(int j = i+1; j < n; j++){
        //         if(arr[j] > temp) flag = 0;
        //     }
            
        //     if(flag) res.push_back(temp);
        // }   
        
        
        // return res;
        
        int n = arr.size();
        
        vector<int> res;
        
        int maxi = arr[n-1];
        res.push_back(maxi);
        
        for(int i = n-2; i >= 0; i--){
            if(arr[i] >= maxi){
                res.push_back(arr[i]);
                maxi = arr[i];
            }
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};
