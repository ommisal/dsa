class Solution {
public:
    string interpret(string command) {
         string res;
        for(auto i=0;i<command.size();){
            if(command[i]=='G'){
                res+='G';
                i++;
            }else if(command[i]=='(' && command[i+1]==')'){
                res+='o';
                i=i+2;
            }else{
               res+="al";
                i=i+4;
            }
        }
        return res;
    }
};