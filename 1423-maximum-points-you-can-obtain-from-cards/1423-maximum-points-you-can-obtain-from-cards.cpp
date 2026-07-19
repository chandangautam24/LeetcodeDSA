class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int lsum=0, rsum=0;
        int mxsum=0;
        for(int i=0; i<k; i++){
            lsum+=cardPoints[i];
        }
        mxsum=lsum;
        int idx=n-1;
        for(int i=k-1; i>=0; i--){
            lsum-=cardPoints[i];
            rsum+=cardPoints[idx--];
            mxsum=max(mxsum,lsum+rsum);
        }
        return mxsum;
    }
};