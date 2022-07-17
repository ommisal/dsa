class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;
        int count;
        int n = sentences.size();
        for(int i=0;i<n;i++)
        {
            count = 0;
            for(int j=0;j<sentences[i].size();j++)
            {
                if(sentences[i][j]==' ')
                    count++;
            }
            maxi = max(maxi,count);
        }
        return maxi+1;
    }
};