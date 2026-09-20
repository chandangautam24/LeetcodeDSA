class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        int n=s.size();
        int j=1;
        for(int i=0; i<n; i++){
           int deg='z'-s[i]+1;
           sum+=j*deg;
           j++;
        }
        return sum;
    }
};