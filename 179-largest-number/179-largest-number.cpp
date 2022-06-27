class Solution {
public:
    static bool comp(string a, string b)
    {
        return (a+b)>(b+a);
    }
    string largestNumber(vector<int>& nums) {
       string ans = "";
        vector<string> res;
        for(int i=0;i<nums.size();i++)
        {
            res.push_back(to_string(nums[i]));
        }
        sort(res.begin(),res.end(),comp);
        for(auto it: res)
        {
            ans+=it;
        }
        int i = 0 ; 
        while(ans[i]=='0'){
            i++;
        }
        if(i==ans.size())
            ans="0";
        return ans;
    }
};