class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int cnt=0;
        //Lambda Function use for sort the 2D array in ascending order of intervals
        sort(intervals.begin(),intervals.end(),
        [](vector<int>&a,vector<int>&b){
            if(a[0]==b[0]){
                return a[1]>b[1];  
            }
            return a[0]<b[0];
        });
        int maxi=0;
        for(auto i:intervals){
            if(i[1]>maxi){
                cnt++;
                maxi=i[1];
            }
        }
        return cnt;
    }
};