class Solution {
public:
bool isselfdiv(int i){
    int x=i;
    while(x>0){
        int digit=x%10;
        if(digit==0 || i%digit!=0){
            return false;
        }
        x/=10;
    }
    return true;
}
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left; i<=right; i++){
           if(isselfdiv(i)){
            ans.push_back(i);
           }
        }
        return ans;
    }
};