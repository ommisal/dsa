class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n=s.length();
        
        vector<string> v;
        
        string ss="";
        
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                if(ss.length()>0){
                    v.push_back(ss);
                    ss="";
                }
            }else{
                ss+=s[i];
            }
        }
        
        if(ss.length()>0)v.push_back(ss);
        
        return v[v.size()-1].length();
        
    }
};