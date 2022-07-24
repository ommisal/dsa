class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count =0 ;
        int res = 0;
        for(int i=0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    count++;
                    if(i!=0&&grid[i-1][j]==1)res++;
                    if(j!=0&&grid[i][j-1]==1)res++;
                    
                }
                
                
            }
            
        }
        return 4*count-2*res;
    }
};