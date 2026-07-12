class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mpp;
        vector<int>ans=arr;
        sort(ans.begin(),ans.end());
        int r=1;
        for(auto &i : ans){
          if(mpp.find(i)==mpp.end()){
            mpp[i]=r++;
          }
        }
       for(int i=0; i<n; i++){
        arr[i]=mpp[arr[i]];
       }
       return arr;
    }
};