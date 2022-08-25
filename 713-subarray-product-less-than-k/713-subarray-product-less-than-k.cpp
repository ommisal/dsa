class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)return 0;
        int prod = 1;
        int count=0;
        int lft =0;
        for(int i=0;i<nums.size();i++)
        {
            prod*=nums[i];
            while(prod>=k)
            {
                prod /=nums[lft];
                lft++;
            }
            count+=i-lft+1;
        }
        
        return count;
    }
};