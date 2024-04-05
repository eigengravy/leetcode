class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int m = grid.size(), n = grid[0].size();
        int count = 0, total = 0, time = 0;

        queue<pair<int,int>> q;

        for (int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==2) q.push({i,j});
                if(grid[i][j]!=0) total+=1;
            }
        }

        vector<int> dx = {0,0,1,-1};
        vector<int> dy = {1,-1,0,0};

        while(!q.empty()){
            int k = q.size();
            count+=k;
            for(int i=0; i<k; i++){
                int row = q.front().first;
                int col = q.front().second;
                q.pop();

                for(int j=0; j<4; j++){
                    int nRow = row + dx[j];
                    int nCol = col + dy[j];

                    if (nRow >= 0 && nRow < m && nCol >= 0 && nCol < n && grid[nRow][nCol]==1){
                        grid[nRow][nCol]=2;
                        q.push({nRow, nCol});
                    }
                }
            }
            if (!q.empty()) time++;
        }

        return total == count ? time : -1;
    }
};