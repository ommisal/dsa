class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n= strs.size();
        sort(strs.begin(),strs.end());
        if(n==0)
            return "";
        string ans = "";
        string x = strs[0];
        string y = strs[n-1];
        for(int i=0;i<x.size();i++)
        {
            if(x[i]==y[i])
            {
                ans +=x[i];
            }
            else
                break;
        }
        return ans;
    }
};