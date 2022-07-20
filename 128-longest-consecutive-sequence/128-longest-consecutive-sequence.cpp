class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int maxi = 0;
        sort(nums.begin(),nums.end());
        if(n==0)
            return 0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]-nums[i-1]==1)
            {
                count++;
                maxi = max(maxi,count);
            }
            else if(nums[i]==nums[i-1])
                continue;
            else
                count=0;
        }
        return maxi+1;
    }
};