class Solution {
public:
    char findTheDifference(string s, string t) {
        char str='\0';
        //int n = s.size()+1;
        for(auto &c:s)
            str^=c;
        for(auto &c:t)
            str^=c;
        return str;
    }
};