class Solution {
public:
    
    
    int findGCD(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxi)
            {
                maxi = nums[i];
            }
            if(nums[i]<mini)
            {
                mini = nums[i];
            }
            
        }
        return gcd(maxi,mini);
    }
    int gcd(int a, int b)
    {
        if(b==0)
        {
            return a;
        }
        return gcd(b, a%b);
    }
};