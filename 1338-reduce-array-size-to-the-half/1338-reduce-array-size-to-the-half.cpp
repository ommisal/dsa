class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        int x=0;int y=0;
        unordered_map<int,int> mp;
        priority_queue<int> pq;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(auto it:mp)
        {
            pq.push(it.second);
        }
        
        while(y<n/2)
        {
            y += pq.top();
            pq.pop();
            x++;
        }
        return x;

    }
};