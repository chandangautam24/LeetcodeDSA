class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {   //1   2    3   4    5    6    7   8     9    10    11  12
       vector<int>days={0, 0,31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
       int alicearr=0; int alicedep=0; int bobarr=0 ;int bobdep=0;
    
        int adays=stoi(arriveAlice.substr(0,2));
        alicearr+=days[adays]+stoi(arriveAlice.substr(3,2));
  
        int bdays=stoi(leaveAlice.substr(0,2));
        alicedep+=days[bdays]+stoi(leaveAlice.substr(3,2));
    
        int cdays=stoi(arriveBob.substr(0,2));
        bobarr+=days[cdays]+stoi(arriveBob.substr(3,2));

        int ddays=stoi(leaveBob.substr(0,2));
        bobdep+=days[ddays]+stoi(leaveBob.substr(3,2));
   
      cout<< alicearr<<" "<<alicedep<<" "<<bobarr<<" "<<bobdep;
      int start=max(alicearr,bobarr);
      int end=min(alicedep,bobdep);
      return max(0,end-start+1);
      
    }
};