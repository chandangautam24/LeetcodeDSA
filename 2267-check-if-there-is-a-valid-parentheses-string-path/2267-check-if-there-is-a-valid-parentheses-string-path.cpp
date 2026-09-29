class Solution {
public:
 vector<vector<vector<int>>> dp;
bool solve(long row,long col,long cnt,long n,long m,vector<vector<char>>&grid){
    if(row>=n || col>=m)return false;
    if(grid[row][col]=='('){
        cnt++;
    }
    else{
        cnt--;
    }
    if(cnt<0)return false;
    if(row==n-1 && col==m-1){
        return cnt==0;
    }
     if (dp[row][col][cnt] != -1)
            return dp[row][col][cnt];
        if (row == n - 1 && col == m - 1)
            return dp[row][col][cnt] = (cnt == 0);

    return dp[row][col][cnt] =
            solve(row + 1, col, cnt, n, m, grid) ||
            solve(row, col + 1, cnt, n, m, grid);
}
    bool hasValidPath(vector<vector<char>>& grid) {
        long n=grid.size();
        long m=grid[0].size();
        if((n+m-1)%2!=0){
            return false; 
        }
           dp.assign(n, vector<vector<int>>(
            m, vector<int>(n + m + 1, -1)
        ));
        return solve(0,0,0,n,m,grid);
    }
};