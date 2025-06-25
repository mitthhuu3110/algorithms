class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // int n = numbers.size();

        // int temp1;
        // int temp2;

        // for(int i = 0; i < n-1; i++){
        //     for(int j = i+1; j < n; j++){
        //         if(numbers[i] + numbers[j] == target){
        //             temp1 = i;
        //             temp2 = j;
        //         }
        //     }
        // }

        // return {temp1+1, temp2+1};

        int n = numbers.size();

        int i = 0;
        int j = n-1;

        while(i < j){
            int sum = numbers[i] + numbers[j];
            if(sum == target){
                return {i+1, j+1};
            }else if(sum < target){
                i++;
            }else j--;
        }

        return {};

    }
};
