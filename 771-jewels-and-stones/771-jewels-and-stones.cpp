class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n = jewels.size();
        int m = stones.size();
        int count = 0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(jewels[j]==stones[i])
                    count++;
            }
        }
        return count;
    }
};