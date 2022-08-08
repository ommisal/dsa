class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        priority_queue<pair<int,char>> maxh;
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        for(auto it:mp)
        {
            maxh.push(make_pair(it.second,it.first));
        }
        string ans = "";
        while(!maxh.empty())
        {
            int m = maxh.top().first;
            char res = maxh.top().second;
            for(int i=0;i<m;i++)
            {
                ans+=res;
            }
            maxh.pop();
        }
        return ans;
    }
};