#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution{
    public:
    
        void mergeArrays(vector<int> &arr, int left, int mid, int right){
            vector<int> temp;
    
            int low = left;
            int high = mid + 1;
    
            while(low <= mid && high <= right){
                if(arr[low] <= arr[high]){
                    temp.push_back(arr[low]);
                    low++;
                }else{
                    temp.push_back(arr[high]);
                    high++;
                }
            }
    
            while(low <= mid){
                temp.push_back(arr[low]);
                low++;
            }
    
            while(high <= right){
                temp.push_back(arr[high]);
                high++;
            }
    
            for (int i = left; i <= right; i++) {
                arr[i] = temp[i - left];
            }
        }
    
        void mergeSort(vector<int>& arr, int left, int right) {
            if(left >= right) return;
    
            int mid = left + (right - left) / 2;
    
            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);
    
            mergeArrays(arr, left, mid, right);
        }
    };
    