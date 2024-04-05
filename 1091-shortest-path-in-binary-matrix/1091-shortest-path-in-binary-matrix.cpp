class Solution {
    bool validsq(int n, int i , int j){
        if(i>=0 && i<n && j>=0 && j<n){
            return 1;
        }
        return 0;
    }
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        queue<pair<int,int>> q;
        if(grid[0][0] == 1 || grid[n-1][n-1] == 1){
            return -1;
        }
        q.push({0,0});
        grid[0][0] = 1;
        int dis = 1;
        while(!q.empty()){
            for(int i = 0; i<q.size() ; i++){
                int row = q.front().first;
                int col = q.front().second;
                if(row == n-1 && col == n-1){
                    return dis;
                }
                q.pop();
                for(int dx = -1; dx<=1 ; dx++){
                    for(int dy = -1 ; dy<=1 ; dy++){
                        int newrow = row+dx;
                        int newcol = col+dy;
                        if(validsq(n,newrow,newcol) && grid[newrow][newcol]==0){
                            q.push({newrow,newcol});
                            grid[newrow][newcol] = 1;
                        }
                    }
                }
            }
            dis++;
        }
        return -1;
    }
};