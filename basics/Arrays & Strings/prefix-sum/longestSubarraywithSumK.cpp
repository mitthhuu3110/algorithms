class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        unordered_map<int, int> ump;
        int sum = 0;
        
        // while(right < n){
        //     sum += arr[right];
        //     if(sum == k){
        //         maxi = max(maxi, right - left + 1);
        //     }
        //     right++;
        // }
        
        // return maxi;
        
        //let's try using prefix sum
        
        int max_len = 0;
        
        for(int i = 0; i < n; i++){
            sum += arr[i];
            
            if(sum == k){
                max_len = i+1;
            }
            
            
            if(ump.find(sum-k) != ump.end()){
                max_len = max(max_len, i - ump[sum - k]);
            }
            
            if(ump.find(sum) == ump.end()){
                ump[sum] = i;
            }
        }
        
        return max_len;
    }
};
