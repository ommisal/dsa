class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size();
        bool flg = false;
        for(int i=1;i<n;i++)
        {
            if(nums[i]<nums[i-1])
            {
                if(flg)
                    return false;
                else
            {
                flg = true;
                if(i-2>=0&&nums[i]<nums[i-2])
                {
                    nums[i]=nums[i-1];
                }
            }
            }
            
        }
        return true;
    }
};