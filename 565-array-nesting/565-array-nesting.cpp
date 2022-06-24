class Solution {
public:
    int ans = 1;
    int arrayNesting(vector<int>& a) {
        
        int c = 0;
        for(int i=0;i<a.size();i++){
            if(a[i]!=-1){
                solve(i,a,c);
                c=0;
            }
        }
        return ans;
    }
    void solve(int i,vector<int>& a,int c){
        if(a[i]==-1){
            ans = max(ans,c);
            return;
        }else{
            int x = a[i];
            a[i]=-1;
            solve(x,a,c+1);
        }
    }
};