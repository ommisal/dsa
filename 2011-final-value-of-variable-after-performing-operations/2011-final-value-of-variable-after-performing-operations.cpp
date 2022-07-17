class Solution {
public:
    int finalValueAfterOperations(vector<string>& s) {
        int n = s.size();
        int X = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=="++X"||s[i]=="X++")
            {
                X = X+1;
            }
            else if(s[i]=="--X"||s[i]=="X--")
            {
                X = X-1;
                
            }
        }
        return X;
    }
};