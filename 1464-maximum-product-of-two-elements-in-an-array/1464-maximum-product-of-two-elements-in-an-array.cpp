class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i=n-1,j=n-2;
        return ((nums[i]-1)*(nums[j]-1));
    }
};