class Solution {
public:
    int m,n;
    int dr[4]={-1,1,0,0};
    int dc[4]={0,0,-1,1};
    void dfs(int r,int c,vector<vector<char>>& grid){
        if(r<0 || r>=m || c<0 || c>=n || grid[r][c]!='1') return;
        grid[r][c]='0';
        for(int d=0;d<4;d++){
            dfs(r+dr[d],c+dc[d],grid);
        }

    }
    int numIslands(vector<vector<char>>& grid) {
        m=grid.size();
        n=grid[0].size();
        int ans=0;
    
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(grid[i][j]=='1'){
                    ans++;
                    dfs(i,j,grid);
                }
                return ans;
    }
};