class Solution {
public:
bool solve(vector<vector<char>>& board, string word,int row,int col, int x){
int n=board.size();
int m=board[0].size();
if(x==word.size()){
    return true;
}
if(row<0 || row>=n || col<0 || col>=m || board[row][col]!=word[x] ||
 board[row][col]=='.'){
   return false;
}
char temp=board[row][col];
board[row][col]='.';
if(solve(board,word,row+1,col,x+1))return true;
if(solve(board,word,row-1,col,x+1))return true;
if(solve(board,word,row,col+1,x+1))return true;
if(solve(board,word,row,col-1,x+1))return true;
board[row][col]=temp;
return false;
}
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(board[i][j]==word[0] && solve(board,word,i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }
};