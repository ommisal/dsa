class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int> mp;
        int i=0;
        for(i=0;i<s.size();i++)
        {   
            mp[s[i]]++;
            if(mp[s[i]]==2)
                break;
        }
        return s[i];
    }
};