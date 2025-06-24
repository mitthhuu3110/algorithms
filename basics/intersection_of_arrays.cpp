// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //brute force approach can be done in O(n^2)
        // int n = nums1.size();
        // int m = nums2.size();

        // set<int> res;

        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < m; j++){
        //         if(nums1[i] == nums2[j]){
        //             res.insert(nums1[i]);
        //         }
        //     }
        // }

        // vector<int> v;

        // for(int it: res){
        //     v.push_back(it);
        // }

        // return v;

        //optimized approach using unordered_maps

        // unordered_map<int, int> ump;
        // unordered_set<int> us;
        // vector<int> res;

        // for(int i = 0; i < nums1.size(); i++){
        //     ump[nums1[i]]++;
        // }

        // for(int j = 0; j < nums2.size(); j++){
        //     if(ump[nums2[j]] >= 1)  us.insert(nums2[j]);
        // }

        // for(int it: us){
        //     res.push_back(it);
        // }

        // return res;

        //more optimization using two pointer along with unordered_maps

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        set<int>s;
        vector<int>result;

        int i=0;
        int j=0;
        
        while(i < nums1.size() && j < nums2.size())
        {
            if(nums1[i] == nums2[j])
            {
                s.insert(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] <nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }

        }

        for(auto n : s)
        {
            result.push_back(n);
        }

        return result;

    }
};
//     }
// };
