// Coming soon
/* This is not the question to be done with 2 pointer method, since it will only take O(n^2) time complexity
Instead of doing that, we can have a simple solution here, instead of searching for the target elements,

1. Create an unordered_map for storing the nums[i] & i
2. search for the target - nums[i] elements here
3. If it already exists in the map, then we have found the required index right ?? then we can just return the currect gng index i & the index where we got the complement (it might've been stored previously in the map. 

*/

// question link -> https://leetcode.com/problems/two-sum/description/


vector<int> twoSum(vector<int> &nums, int target){
  int n = nums.size();

  unordered_map<int, int> ump;

  for(int i = 0; i < n; i++){
    int complement = target - nums[i];
    if(ump.find(complement) != ump.end()){
      return {ump[complement], i};
    }
    ump[nums[i]] = i;
  }

  return {};
}
