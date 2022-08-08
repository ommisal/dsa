class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();
        int maxindex=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>maxi)
            {
                 maxi = nums[i];
            maxindex = i;
            }
               
        }
        for(int i=0;i<n;i++)
        {
            if(i!=maxindex)
            {
                if(nums[i]*2>maxi)
                    return -1;
            }
        }
        return maxindex;
    }
};