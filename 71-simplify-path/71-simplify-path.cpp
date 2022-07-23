class Solution {
public:
    string simplifyPath(string path) {
        string ans="";
        stack<string>s1;
        for(int i=0;i<path.size();i++)
        {
            if(path[i]=='/')
                continue;
            string temp ;
            while(i<path.size()&&path[i]!='/')
            {
                temp +=path[i];
                ++i;
                
            }
            if(temp==".")
            {
                continue;

            }
            else if(temp=="..")
            {
                if(!s1.empty())
                    s1.pop();
            }
            else
                s1.push(temp);
        }
        while(!s1.empty())
        {
            ans = "/"+s1.top()+ans;
            s1.pop();
            
        }
        if(ans.size()==0)
            return "/";
        return ans;
    }
};