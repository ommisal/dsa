class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int k = 3;
        priority_queue<int, vector<int>, greater<int> > minh;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]==1)
            {
                minh.push(nums[i]);
                if(minh.size()>3)
                    minh.pop();
            }
        }
        if(minh.size()==2)
            minh.pop();
        return minh.top();
    }
};