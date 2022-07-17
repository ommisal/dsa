class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n = jewels.size();
        int m = stones.size();
        set<char> st;
        int count = 0;
        for(int i=0;i<n;i++)
        {
            st.insert(jewels[i]);
        }
        for(int i=0;i<m;i++)
        {
            if(st.find(stones[i])!=st.end())
            {
                count++;
            }
        }
        return count;
    }
};