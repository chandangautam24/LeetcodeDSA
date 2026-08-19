class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        int m=reservedSeats.size();
        unordered_map<int,vector<int>>rows;
        for(auto &seats: reservedSeats){
            rows[seats[0]].push_back(seats[1]);
        }
        int grp=(n-rows.size())*2;
        for(auto &[row,seats]:rows){
            bool rstart=true; //2,3,4,5
            bool rmid=true;   // 4,5,6,7
            bool rend=true;   // 6,7,8,9
          for(auto &seat:seats){
            if(seat>=2 && seat<=5){
                rstart=false;
            }
            if(seat>=4 && seat<=7){
                rmid=false;
            }
            if(seat>=6 && seat<=9){
                rend=false;
            }
          }
          if(rstart && rend){
            grp+=2;
          }
          else if(rstart||rmid||rend){
            grp+=1;
          }
        }
        return grp;
    }
};