class Solution {
public:
    int bfs(vector<vector<int>>& grid,int i,int j,int m,int n)
    {
        
        if(i==m-1&&j==n-1)
            return 1;
        if(grid[i][j]!=0)
        {
            return grid[i][j];
        }
        int ans = 0;
        if(i+1<m)
        {
            ans +=bfs(grid,i+1,j,m,n);
        }
        if(j+1<n)
        {
            ans += bfs(grid,i,j+1,m,n);
        }
        grid[i][j]=ans;
        
        return ans;
        
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> v(m,vector<int>(n,0));
        return  bfs(v,0,0,m,n);
        
        
    }
};