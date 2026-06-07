class Solution {
public:
    bool consecutiveSetBits(int n) {
        string a;
        while(n>0){
            a+=n%2+'0';
            n/=2;
        }
        reverse(a.begin(),a.end());
        int cnt=0;
        for(int i=0; i<a.size(); i++){
            if(a[i]=='1'&& a[i+1]=='1'){
                cnt++;
            }
        }
        if(cnt==1){
            return true;
        }
        return false;
    }
};