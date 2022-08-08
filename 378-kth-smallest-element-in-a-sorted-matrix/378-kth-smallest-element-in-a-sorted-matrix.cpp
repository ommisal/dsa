class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>,greater<int>> maxh;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                maxh.push(matrix[i][j]);
            }
        }
        int ans =0;
        while(k--)
        {
            ans = maxh.top();
            maxh.pop();
        }
        return ans;
    }
};