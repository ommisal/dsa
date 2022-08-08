class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int ans =0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                ans = ((nums[i]-1)*(nums[j]-1));
                maxi  = max(maxi,ans);
            }
        }
        return maxi;
    }
};