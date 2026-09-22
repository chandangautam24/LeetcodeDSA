class Solution {
public:
vector<vector<int>>ans;
 void combination(int i, int sum, int n, vector<int>& temp,
                     vector<int>& candidates, int target) {
        if (sum == target) {
            ans.push_back(temp);
            return;
        }
        for(int j=i; j<n; j++){
        if(j>i && candidates[j]==candidates[j-1])
        continue;
        if(sum+candidates[j]>target){
            break;
        }
        temp.push_back(candidates[j]);
        combination(j+1, sum + candidates[j], n, temp, candidates, target);
        temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        sort(candidates.begin(),candidates.end());
        vector<int>temp;
        combination(0, 0, n, temp, candidates, target);
        return ans;
    }
};