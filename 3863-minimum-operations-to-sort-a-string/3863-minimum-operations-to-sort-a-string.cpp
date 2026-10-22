class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        bool sorted=true;
        char mn=*min_element(s.begin(),s.end());
        char mx=*max_element(s.begin(),s.end());
        for(int i=1; i<n; i++){
            if((s[i-1]-'a')>(s[i]-'a')){
                sorted=false;
                break;
            }
        }
        if(sorted)return 0;
        if(n==2)return -1;
        if(s[0]==mn || s[n-1]==mx){
            return 1;
        }
        for(int i=1; i<n-1; i++){
            if(s[i]==mn || s[i]==mx) return 2;
        }
        return 3;
    }
};