class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second>1)
            {
                count = it.first;
                break;
            }
        }
          
        return count;
    }
};