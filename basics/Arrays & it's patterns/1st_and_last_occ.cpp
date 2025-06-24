class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        //brute force 
        // int n = nums.size();
        // vector<int> v;

        // if(n == 0) return {-1, -1};

        // for(int i = 0; i < n; i++){
        //     if(nums[i] == target){
        //         v.push_back(i);
        //     }
        // }
        // if(v.empty()) return {-1, -1};

        // int it1 = *min_element(v.begin(), v.end());
        // int it2 = *max_element(v.begin(), v.end());

        // return {it1, it2};

        // vector<int> res = {-1, -1};

        // optimized solution with binary search algorithm
        int n = arr.size();

        int low = 0;
        int high = n-1;

        int res1 = -1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(arr[mid] == target){
                res1 = mid;
                high = mid - 1;
            }else if(arr[mid] < target){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }

        int low2 = 0;
        int high2 = n-1;


        int res2 = -1;

        while(low2 <= high2){
            int mid2 = low2 + (high2 - low2)/2;

            if(arr[mid2] == target){
                res2 = mid2;
                low2 = mid2 + 1;
            }else if(arr[mid2] < target){
                low2 = mid2 + 1;
            }else{
                high2 = mid2 - 1;
            }
        }

        return {res1, res2};
    }
};
