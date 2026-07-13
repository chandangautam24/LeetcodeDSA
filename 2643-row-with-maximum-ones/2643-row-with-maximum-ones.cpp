class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int maxi=0;
        int row=0;
        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=0; j<m; j++){
                sum+=mat[i][j];
            }
            if(sum>maxi){
                maxi=sum;
                row=i;
            }
        }
        return {row,maxi};
    }
};