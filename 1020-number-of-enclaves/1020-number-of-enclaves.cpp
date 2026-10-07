class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size(); 
        int n=grid[0].size();
        queue<pair<int,int>>q;
        int dr[4]={-1,1,0,0};
        int dc[4]={0,0,-1,1};

        auto push=[&](int r,int c){
            if(grid[r][c]==1){
                grid[r][c]=0;
                q.push({r,c});
            }
        };
        for(int i=0;i<m;i++){
            push(i,0);
            push(i,n-1);

        }
        for(int j=0;j<n;j++){
            push(0,j);
            push(m-1,j);
            
        }
        while(!q.empty()) {

            auto [r, c] = q.front();
            q.pop();

            for(int d = 0; d < 4; d++) {

                int nr = r + dr[d];
                int nc = c + dc[d];

                if(nr >= 0 && nr < m &&
                   nc >= 0 && nc < n &&
                   grid[nr][nc] == 1) {

                    grid[nr][nc] = 0;
                    q.push({nr, nc});
                }
            }}
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) ans++;
            }
        }
        return ans;

    }
};