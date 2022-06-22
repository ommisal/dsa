class Solution {
public:
    vector<int> v;
    int climbStairs(int n) {
        
        vector<int> v(n+1,-1);
        if(n==1)return 1;
        return tabu(n,v);
        // return memo(n,v);
        
     }
    // int memo(int n,vector<int> &v){
    //     if(n<=2)return n;
    //     if(v[n]!=-1){
    //         return v[n];
    //     }
    //    return v[n] = solve(n-1,v)+solve(n-2,v);
    //  }
    int tabu(int n,vector<int> &v){
        v[0]=0;
        v[1]=1;
        v[2]=2;
        for(int i=3;i<=n;i++){
            v[i] = v[i-1]+v[i-2];
        }
        return v[n];
    }
};