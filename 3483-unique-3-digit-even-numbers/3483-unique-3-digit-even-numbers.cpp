class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n=digits.size();
        vector<int>freq(10,0);
        int cnt=0;
        for(int i=0; i<n; i++){
            freq[digits[i]]++;
        }
        for(int hundred=1; hundred<=9; hundred++){
            if(freq[hundred]==0)continue;
            freq[hundred]--;
            for(int tens=0; tens<=9; tens++){
                if(freq[tens]==0)continue;
                freq[tens]--;
                for(int unit=0; unit<=8;unit+=2){
                    if(freq[unit]>0){
                        cnt++;
                    }
                }
                freq[tens]++;
            }
            freq[hundred]++;
        }
        return cnt;
    }
};