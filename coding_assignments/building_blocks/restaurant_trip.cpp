#include <bits/stdc++.h>
using namespace std;


class Solution{

    public:
    void solve (int n, vector<int> x, vector<int> y)
    {
      //Write your code here
      cin >> n;

      for(int i = 0; i < n; i++){
        cin >> x[i];
      }

      for(int j = 0; j < n; j++){
        cin >> y[j];
      }

      int maxDays = 0;
        vector<bool> visited(n, false);
        
        while(true) {
            int remainingFriends = 0;
            for(int i = 0; i < n; i++) {
                if(!visited[i]) remainingFriends++;
            }
            
            if(remainingFriends < 2) break;
            
            vector<pair<int, int>> todayGroup;
            for(int i = 0; i < n; i++) {
                if(!visited[i]) {
                    todayGroup.push_back({x[i], y[i]});
                }
            }
            
            int bestGroupSize = 0;
            double bestRatio = 0;
            vector<int> bestGroup;
            
            for(int groupSize = 2; groupSize <= remainingFriends; groupSize++) {
                vector<int> indices(remainingFriends);
                for(int i = 0; i < remainingFriends; i++) indices[i] = i;
                
                do {
                    int totalFood = 0;
                    int totalBudget = 0;
                    for(int i = 0; i < groupSize; i++) {
                        totalFood += todayGroup[indices[i]].first;
                        totalBudget += todayGroup[indices[i]].second;
                    }
                    
                    if(totalBudget >= totalFood) {
                        double ratio = (double)totalBudget / totalFood;
                        if(ratio > bestRatio) {
                            bestRatio = ratio;
                            bestGroupSize = groupSize;
                            bestGroup = vector<int>(indices.begin(), indices.begin() + groupSize);
                        }
                    }
                    
                    reverse(indices.begin() + groupSize, indices.end());
                } while(next_permutation(indices.begin(), indices.end()));
            }
            
            if(bestGroupSize == 0) break;
            
            maxDays++;
            
            vector<int> originalIndices;
            int idx = 0;
            for(int i = 0; i < n; i++) {
                if(!visited[i]) {
                    if(find(bestGroup.begin(), bestGroup.end(), idx) != bestGroup.end()) {
                        visited[i] = true;
                    }
                    idx++;
                }
            }
        }
        
        cout << maxDays << endl;

}
};
